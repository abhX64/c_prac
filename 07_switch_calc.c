#include <stdio.h>
int main(){ double a,b; char op; scanf("%lf %c %lf",&a,&op,&b);
switch(op){ case '+':printf("%g",a+b);break; case '-':printf("%g",a-b);break;
case '*':printf("%g",a*b);break; case '/': if(b)printf("%g",a/b); else printf("Err");} }