#include <iostream>
#include <string>
#include <list>
using namespace std;
 
/**
AOJ ALDS1_3_C: Doubly Linked List
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_C

result:
http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=2714008
Judge: 10/10 	C++ 	CPU: 00:83 sec 	Memory: 34400 KB 	Length: 753 B 	2018-02-18 18:13
*/
int main() {
    int n,i,x;
    string com;
    list<int> L;
    list<int>::iterator it;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>com;
        if(com=="insert"){
            cin>>x;
            L.push_front(x);
        }else if(com=="delete"){
            cin>>x;
            for(it=L.begin();it!=L.end();it++){
                if((*it)==x){L.erase(it);break;}
            }
        }else if(com=="deleteFirst"){
            L.pop_front();
        }else if(com=="deleteLast"){
            L.pop_back();
        }
    }
    if(!L.empty()){
        it=L.begin();
        cout<<(*it);
        for(it++;it!=L.end();it++) cout<<" "<<(*it);
    }
    cout<<endl;
    return 0;
}