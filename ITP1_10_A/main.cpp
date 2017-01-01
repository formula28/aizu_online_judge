#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

/**
AOJ ITP1_10_A Distance.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_10_A
幾何学 2点間距離.
*/
int main() {
    double P1x,P1y,P2x,P2y;
    cin >> P1x >> P1y >> P2x >> P2y;
    printf("%.8lf\n", sqrt((P1x-P2x)*(P1x-P2x)+(P1y-P2y)*(P1y-P2y)));
    return 0;
}
