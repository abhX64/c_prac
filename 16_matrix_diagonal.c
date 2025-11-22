#include <stdio.h>
int main(){ int m,n; scanf("%d%d",&m,&n);
int a[m][n]; for(int i=0;i<m;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
long long s1=0,s2=0; int mn=m<n?m:n;
for(int i=0;i<mn;i++)s1+=a[i][i];
for(int i=0;i<mn;i++)s2+=a[i][n-1-i];
printf("%lld %lld",s1,s2);}