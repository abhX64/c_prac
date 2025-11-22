#include <stdio.h>
#include <math.h>
int prime(int n){ if(n<=1)return 0; if(n<=3)return 1; if(n%2==0)return 0;
int r=sqrt(n); for(int i=3;i<=r;i+=2) if(n%i==0)return 0; return 1; }
int main(){ int n; scanf("%d",&n); printf(prime(n)? "Prime":"Not"); }