#include <stdio.h>
char g(double p){ if(p>=90)return'A'; if(p>=80)return'B'; if(p>=60)return'C'; return'D'; }
int main(){ double m1,m2,m3,m4,m5;
scanf("%lf%lf%lf%lf%lf",&m1,&m2,&m3,&m4,&m5);
double p=(m1+m2+m3+m4+m5)/5; printf("%g %c",p,g(p)); }