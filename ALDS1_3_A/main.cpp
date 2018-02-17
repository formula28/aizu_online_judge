#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>
using namespace std;

/**
AOJ ALDS1_3_A: Stack
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_A
*/
int main() {
    string in;
    int l,r;
    stack<int> st;
    while(cin>>in){
        if (in == "+") {
            r = st.top();
            st.pop();
            l = st.top();
            st.pop();
            st.push(l+r);
        } else if (in == "-") {
            r = st.top();
            st.pop();
            l = st.top();
            st.pop();
            st.push(l-r);
        } else if (in == "*") {
            r = st.top();
            st.pop();
            l = st.top();
            st.pop();
            st.push(l*r);
        } else {
            st.push(atoi(in.c_str()));
        }
    }
    cout<<st.top()<<endl;
    return 0;
}