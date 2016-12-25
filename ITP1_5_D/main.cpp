#include <iostream>
using namespace std;

/**
AOJ ITP1_5_D Structured Programming.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_D
リファクタリング.
*/
bool call(int x) {
    bool ret = false;
    if (x%3==0) ret = true;
    else {
        while(x) {
            if (x%10==3){
                ret = true;
                break;
            }
            x/=10;
        }
    }
    return ret;
}
int main() {
    int n,i,x;
    cin>>n;
    for (i=1;i<=n;i++) {
        if (call(i)) cout << " " << i;
    }
    cout << endl;
    return 0;
}
