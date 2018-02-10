#include <iostream>
using namespace std;

/**
AOJ ALDS1_1_B: Greatest Common Divisor
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_B
*/
int gcd(int a, int b){
    if(b)return gcd(b,a%b);
    else return a;
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}