#include <cstdio>
using namespace std;

/**
AOJ ALDS1_3_B: Queue
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_B

result:
http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=2713540
Judge: 10/10 	C++ 	CPU: 00:00 sec 	Memory: 5160 KB 	Length: 351 B 	2018-02-18 04:34
*/
#define S 100000
typedef struct{char n[10];int t;}QUE;QUE que[S];main(){int i=0,T=0,h=0,t,n,q;scanf("%d %d",&n,&q);for(t=n;i<n;)scanf("%s %d",que[i++].n,&que[i].t);while(h!=t){i=que[h].t<=q||t-h==1;T+=i?que[h].t:q;if(i)printf("%s %d\n",que[h].n,T);else{que[h].t-=q;que[t]=que[h];t=S==t+1?0:t+1;}h=S==h+1?0:h+1;}}