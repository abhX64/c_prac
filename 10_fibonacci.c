#include <stdio.h>
int main(){ int n; scanf("%d",&n);
long long a=0,b=1; for(int i=0;i<n;i++){ printf("%lld ",a);
long long t=a+b;a=b;b=t;} }