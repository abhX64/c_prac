#include <stdio.h>
int main(){ int x=5,y=7,t; t=x;x=y;y=t;
printf("%d %d\n",x,y); x=5;y=7;
x=x+y;y=x-y;x=x-y; printf("%d %d",x,y);}