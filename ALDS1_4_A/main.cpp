/**
AOJ ALDS1_4_A: Linear Search
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_A

result:
http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=3011869
Judge: 10/10 	C++ 	CPU: 00:00 sec 	Memory: 3156 KB 	Length: 359 B 	2018-07-09 23:13
*/
#include <iostream>
#include <set>
using namespace std;
 
int main() {
    int n,q,s,t,i,ans=0;
    cin>>n;
    set<int> S = set<int>();
    for (i=0;i<n;i++) {
        cin>>s;
        S.insert(s);
    }
    cin>>q;
    for (i=0;i<q;i++) {
        cin>>t;
        if (S.count(t)>0) {
            ans++;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}