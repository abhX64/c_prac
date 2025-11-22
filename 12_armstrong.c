#include <stdio.h>
int main(){ for(int n=1;n<=100;n++){ int x=n,s=0,d;
while(x){d=x%10; s+=d*d*d; x/=10;} if(s==n) printf("%d ",n);} }