#! /bin/bash
## 標準入出力のテストケースをテストするシェルスクリプト

## ○使い方
## >test.sh testcase.txt
## ○テストケースファイル(testcase.txt)
## 「-- INPUT」行と次の「-- OUTPUT」行の文字列がINPUTとして使用されます。
## 「-- OUTPUT」行と次の「-- INPUT」行またはファイル終端までの文字列がOUTPUTとして認識されます。
## 例)
## -- INPUT --
## aaaa
## -- OUTPUT --
## bbbb
## -- INPUT --
## cccc
## -- OUTPUT --
## dddd
## (EOF)
## ○参考文献
## https://github.com/kkoiwai/stdio-tester
## http://qiita.com/kkoiwai/items/d70c21f92eaca6bf9939

## テストケースファイル
if [ $# -ne 1 ]; then
    echo "[testcase error] specify only one argument(testcase file)."
    exit 1
fi
tcf=$1

## 実行コマンド
runcmd="./a.exe"
## 入力データ開始位置
ist=(`cat $tcf | sed -n -e '/^-- INPUT/='`)
## 想定出力データ開始位置
ost=(`cat $tcf | sed -n -e '/^-- OUTPUT/='`)

## 入出力データの数が異なる場合はエラー
if [ ${#ist[@]} -ne ${#ost[@]} ]; then
    echo "[testcase error] $tcf need INPUT-OUTPUT pairs."
    exit 1
fi

## テストケース数
case_num=${#ist[@]}
## 正解数
success_num=0

## テストケースファイル末尾をoutputの終わりとして追加
foe=(`cat $tcf | sed -n -e '='`)
ist=("${ist[@]}" $[${#foe[@]}+1]) 

for ((i=0; i<$case_num; i++)); do
    ## 入力データ
    if [ $[${ist[$i]}+1] -gt $[${ost[$i]}-1] ]; then
        echo "[testcase error] OUTPUT Line appears before INPUT Line in $tcf."
        exit 1
    fi
    inputdata=`cat $tcf | sed -n -e $[${ist[$i]}+1],$[${ost[$i]}-1]p`

    ## 想定出力データ
    if [ $[${ost[$i]}+1] -gt $[${ist[$i+1]}-1] ]; then
        echo "[testcase error] OUTPUT Line appears before INPUT Line in $tcf."
        exit 1
    fi
    outputdata=`cat $tcf | sed -n -e $[${ost[$i]}+1],$[${ist[$i+1]}-1]p`

    ## 実行結果
    result=`echo "$inputdata" | "$runcmd"`

    ## 想定出力と実行結果を比較
    echo "$outputdata" | ( echo "$result" | diff /dev/fd/3 - > /dev/null) 3<&0
    ## 結果表示
    if [ $? = 0 ]; then
        echo "Case $i OK"
        success_num=$[$success_num+1]
    else
        echo "Case $i NG"
        echo "$outputdata" | ( echo "$result" | diff /dev/fd/3 -) 3<&0
    fi
done
echo "[result: $success_num / $case_num OK]."
