#include <iostream>
using namespace std;

/**
AOJ ALDS1_1_D: Maximum Profit
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_D
*/
int main() {
    int n,rmin,drmax=-1000000000,i,r;
    cin>>n>>rmin;
    for(i=1;i<n;i++){
        cin>>r;
        if(drmax<r-rmin)drmax=r-rmin;
        if(r<rmin)rmin=r;
    }
    cout<<drmax<<endl;
    return 0;
}