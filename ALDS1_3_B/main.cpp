#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;

/**
AOJ ALDS1_3_B: Queue
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_B

result:
http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=2713503
Judge: 10/10 	C++ 	CPU: 00:01 sec 	Memory: 5256 KB 	Length: 934 B 	2018-02-18 02:56
*/
int main() {
    string name;
    int i,n,q,time,elapsedt = 0;
    queue<pair<string,int> > que;
    vector<pair<string,int> > ans;
    pair<string,int> tmp;
    cin>>n>>q;
    for(i=0;i<n;i++) {
        cin>>name>>time;
        que.push(make_pair(name,time));
    }
    while(que.size()>0){
        tmp = que.front();
        que.pop();
        if(tmp.second <= q) {
            elapsedt += tmp.second;
            ans.push_back(make_pair(tmp.first,elapsedt));
        } else {
            elapsedt += q;
            que.push(make_pair(tmp.first,tmp.second - q));
        }
    }
    for(i=0;i<n;i++) {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    return 0;
}