#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

/**
AOJ ITP1_10_B Triangle.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_10_B
幾何学 2点間距離.
*/
int main() {
    double a,b,th,S,L,h;
    cin >> a >> b >> th;
    S = a * b * sin(M_PI*th/180) / 2.0f;
    L = a + b + sqrt(a*a + b*b - 2.0f*a*b*cos(M_PI*th/180));
    h = b * sin(M_PI*th/180);
    printf("%.8lf\n%.8lf\n%.8lf\n", S, L, h);
    return 0;
}
