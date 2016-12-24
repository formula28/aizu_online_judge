#include <iostream>
using namespace std;

/**
AOJ ITP1_2_C Sorting Three Numbers.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_2_C
整数値バブルソート.
*/
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int main() {
    int N=3, a[N];
    for (int i=0;i<N;i++) cin >> a[i];
    for (int i=0;i<N-1;i++) {
        for (int j=i+1;j<N;j++) {
           if (a[i] > a[j]) swap(a[i],a[j]);
        }
        cout << a[i] << " ";
    }
    cout << a[N-1] << endl;
    return 0;
}