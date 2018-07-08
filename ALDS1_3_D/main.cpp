/**
AOJ ALDS1_3_D: Areas on the Cross-Section Diagram
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_D

result:
http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=3009101
Judge: 50/50 	C++ 	CPU: 00:39 sec 	Memory: 3228 KB 	Length: 1128 B 	2018-07-09 00:42
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() {
    // 水たまり体積(単位は三角形1つ),水たまり体積合計,相対的な深さ,index
    int l,A=0,d,i,j;
    // 水たまり体積
    vector<int> L = vector<int>();
    // 地形
    string in;
    cin>>in;
    // 水たまりの始点探索ループ.
    for (i=0;i<in.size();i++) {
        switch (in[i]) {
        case '\\':
            // 水たまり判定・体積計算ループ.
            l=1;d=1;
            for (j=i+1;j<in.size() && d>0;j++) {
                switch (in[j]) {
                case '\\':
                    l=l+d*2+1;
                    d++;
                    break;
                case '/':
                    l=l+d*2-1;
                    d--;
                    break;
                case '_':
                    l=l+d*2;
                    break;
                default:
                    break;
                }
            }
            if (d<1) {
                L.push_back(l);
                A += l;
                i = j-1;
            }
            break;
        case '/':
            break;
        case '_':
            break;
        default:
            break;
        } 
    }
    
    cout<<A/2<<endl;
    cout<<L.size();
    for (i=0;i<L.size();i++) cout<<" "<<L[i]/2;
    cout<<endl;
    return 0;
}