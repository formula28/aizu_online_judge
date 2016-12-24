#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    string s1;

    // 1文字繰り返し初期化.
    cout<<s1.assign(10,'A');
    cout << s1.assign(10,'B');
    string s3(10, 'C');
    cout << s3 << endl;

    // 部分文字列で初期化.
    s1 = "abcdefg";
    string s2(s1, 2, 4);
    cout << s2 << endl;

    // 配列初期化.
    char cs1[] = {'x', 'y', 'z', '\0'};
    cout << cs1 << endl;

    // 文字列連結.
    s1 = "abc";
    s2 = "ABC";
    cout << s1 + s2 << endl;

    // 文字列挿入.
    s1 = "abc";
    s2 = "ABC";
    s3 = "xyz";
    cout << s1.insert(2, s2) << endl; // s1[2] にs2挿入.s1自体が変化することに注意.
    cout << s1.insert(3, s3.substr(1)) << endl; // s1[3] にs3[1]以降を挿入.

    // 検索.
    s1 = "abcdefghijklmnopqrstuvwxyz";
    cout << (int) s1.find("mno", 4) << endl; // s1[4]から末尾に向かって検索し、マッチした場合は位置を返却.
    cout << (int) s1.find("ab", 4) << endl; // マッチしない場合.
    cout << (int) s1.rfind("y", 24) << endl; // 先頭方向へ検索.

    return 0;
}