/**
AOJ ALDS1_4_C: Dictionary
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_C

result:
http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=3011989
Judge: 10/10 	C++ 	CPU: 01:60 sec 	Memory: 32572 KB 	Length: 467 B 	2018-07-09 23:56
*/
#include <iostream>
#include <string>
#include <set>
using namespace std;
 
int main() {
    int n,i;
    string op,str;
    set<string> dict;
    cin>>n;
    for (i=0;i<n;i++) {
        cin>>op>>str;
        if (op == "insert") {
            dict.insert(str);
        } else if (op == "find") {
            if (dict.count(str)>0) {
                cout<<"yes"<<endl;
            } else {
                cout<<"no"<<endl;
            }
        }
    }
    return 0;
}