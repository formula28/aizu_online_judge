#include <iostream>
#include <cstdio>
using namespace std;

/**
AOJ ITP1_4_A A / B Problem.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_A
数の問題 割り算と変数の型.
※浮動小数点数の出力について、
手元で実行した時は、float,doubleで出力は変わらなかったが、
submitしたら、floatではWA、doubleではACだった.
*/
int main() {
    int a,b;
    cin >> a >> b;
    printf("%d %d %lf", a/b, a%b, (double)a/b);
    return 0;
}
