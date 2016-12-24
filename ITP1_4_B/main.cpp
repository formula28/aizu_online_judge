#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

/**
AOJ ITP1_4_B Circle.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_B
図形問題 円周長,円面積.
*/
int main() {
    double r;
    cin >> r;
    printf("%lf %lf\n",r*r*M_PI,r*M_PI*2);
    return 0;
}
