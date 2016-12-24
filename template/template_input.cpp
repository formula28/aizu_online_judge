#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main() {
    int a,b;
    string s;
    char *c, *d;

    // 空白or改行区切り入力.
    // 空白、改行は自動で読み飛ばされる.
    // 例：1,2
    cin >> a >> b;
    cout << a << "," << b << endl;

    // カンマ区切り入力.
    // 例：1,2
    scanf("%d,%d", &a, &b);
    cout << a << "_" << b << endl;

    // 一行入力(改行区切り入力).
    // 途中の空白も一緒に読み込みたい場合に一行入力を行う.
    // ただし、scanfが終端改行を読み飛ばさないので、
    // scanfの後にすぐgetlineを使うと何も読み込めずに終わることに注意.
    cin.ignore();
    getline(cin, s);
    cout << s << endl;
    getline(cin, s);
    cout << s << endl;

    // 一行に何個データがあるかわからない場合の任意文字群での区切り
    getline(cin, s);
    char delim[] = "., ";
    for (d = strtok((char*)s.c_str(), delim); d != NULL; d = strtok(NULL, delim)) {
        puts(d);
    }

    return 0;
}