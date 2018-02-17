#include <cstdio>
#include <cstring>
using namespace std;

/**
AOJ ALDS1_3_B: Queue
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_B

result:
http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=2713509
Judge: 10/10 	C++ 	CPU: 00:00 sec 	Memory: 5188 KB 	Length: 815 B 	2018-02-18 03:17
*/
#define QUE_SIZE 1000000
typedef struct {
    char name[10];
    int time;
} QUE;
QUE que[QUE_SIZE];

int main() {
    int i,n,q,time=0,head=0,tail;
    scanf("%d %d", &n, &q);
    tail=n;
    for(i=0;i<n;i++) scanf("%s %d", que[i].name, &que[i].time);
    while(head!=tail){
        if(que[head].time <= q || (QUE_SIZE+tail-head)%QUE_SIZE == 1) {
            time += que[head].time;
            printf("%s %d\n", que[head].name, time);
            head = (head+1)==QUE_SIZE?0:(head+1);
        } else {
            time += q;
            que[head].time -= q;
            que[tail] = que[head];
            head = (head+1)==QUE_SIZE?0:(head+1);
            tail = (tail+1)==QUE_SIZE?0:(tail+1);
        }
    }
    return 0;
}