#include <stdio.h>
int main(){ double a,b,c; scanf("%lf%lf%lf",&a,&b,&c);
double m=a; if(b>m)m=b; if(c>m)m=c; printf("%g",m);}