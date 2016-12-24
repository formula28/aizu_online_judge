#include <iostream>
#include <stdio.h>
using namespace std;

/**
AOJ ITP1_1_C Rectangle.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_C
ただやるだけ.
*/
int main() {
    int a,b;
    cin >> a >> b;
    printf("%d %d\n", a*b, (a+b)*2);
    return 0;
}