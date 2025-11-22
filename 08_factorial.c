#include <stdio.h>
int main(){ int n; scanf("%d",&n);
unsigned long long f=1; for(int i=2;i<=n;i++)f*=i;
printf("%llu",f);}