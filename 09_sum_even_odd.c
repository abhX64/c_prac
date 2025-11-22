#include <stdio.h>
int main(){ int N; scanf("%d",&N);
long long e=0,o=0; for(int i=1;i<=N;i++) if(i%2)e+=i; else o+=i;
printf("%lld %lld",e,o);}