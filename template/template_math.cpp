#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    double r;
    cin >> r;
    // 円の面積と円周長
    // cmathのマクロが使えなかったら、自分で定義する.
    // #define M_PI 3.1415926535897932384626433832795
    printf("%lf %lf\n",r*r*M_PI,r*M_PI*2);
    return 0;
}
