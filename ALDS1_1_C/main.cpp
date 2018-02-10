#include <iostream>
using namespace std;

/**
AOJ ALDS1_1_C: Prime Numbers
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C
*/
int main() {
    int N,a,ret=0,j;
    cin>>N;
    for(;N>0;N--){
        cin>>a;
        if(a==2) ret++;
        else if(a%2>0){
            for(j=3;j*j<=a;j+=2) if(a%j==0) break;
            if(j*j>a) ret++;
        }
    }
    cout<<ret<<endl;
    return 0;
}