#include <stdio.h>
#include <limits.h>
int main(){ int n,x; scanf("%d",&n);
int mn=INT_MAX,mx=INT_MIN; for(int i=0;i<n;i++){scanf("%d",&x);
if(x<mn)mn=x; if(x>mx)mx=x;} printf("%d %d",mn,mx);}