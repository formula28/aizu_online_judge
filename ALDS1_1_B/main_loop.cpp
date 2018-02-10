#include <iostream>
using namespace std;

/**
AOJ ALDS1_1_B: Greatest Common Divisor
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_B
*/
int main() {
    int a,b,t;
    cin>>a>>b;
    if(b>a){t=a;a=b;b=t;}
    while(t=a%b){a=b;b=t;}
    cout<<b<<endl;
    return 0;
}