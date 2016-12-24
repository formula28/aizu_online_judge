#include <iostream>
#include <stdio.h>
using namespace std;

/**
AOJ ITP1_1_D Watch.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_D
時刻表示変換 ただやるだけ.
*/
int main() {
    int S;
    cin >> S;
    printf("%d:%d:%d\n", S/3600, S%3600/60, S%3600%60);
    return 0;
}