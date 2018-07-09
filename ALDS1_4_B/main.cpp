/**
AOJ ALDS1_4_B: Binary Search
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_B

result:
http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=3011912
Judge: 10/10 	C++ 	CPU: 00:06 sec 	Memory: 7716 KB 	Length: 359 B 	2018-07-09 23:30
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