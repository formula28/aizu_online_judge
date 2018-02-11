#include <iostream>
#include <vector>
#include <string>
using namespace std;

/**
AOJ ALDS1_2_C: Stable Sort
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_C
*/
void swap(char *a,char *b){
    char t = *a;
    *a = *b;
    *b = t;
}
int main() {
    int n,i,j,k;
    vector<char> bk[9];
    // input.
    cin>>n;
    string bs(n,'A'),sn(n,'0');
    for (i=0;i<n;i++) {
        cin>>bs[i]>>sn[i];
        bk[sn[i]-'0'-1].push_back(bs[i]);
    }
    string ss(bs);

    // buble sort(bucket sort).
    k=0;
    for (i=0;i<9;i++) {
        for(j=0;j<bk[i].size();j++,k++) {
            bs[k]=bk[i][j];
            cout<<(k==0?"":" ")<<bs[k]<<i+1;
        }
    }
    cout<<"\nStable\n";

    // selection sort.
    for (i=0;i<n-1;i++) {
        k=i;
        for (j=i;j<n;j++)if(sn[j]<sn[k])k=j;
        if(i!=k){swap(sn[i],sn[k]);swap(ss[i],ss[k]);}
        cout<<ss[i]<<sn[i]<<" ";
    }
    cout<<ss[n-1]<<sn[n-1]<<endl;
    cout<<(ss==bs?"Stable":"Not stable")<<endl;

    return 0;
}