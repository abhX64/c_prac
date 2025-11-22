#include <stdio.h>
size_t my_strlen(char*s){char*p=s;while(*p)p++;return p-s;}
char*my_strcpy(char*d,char*s){char*t=d;while((*t++=*s++));return d;}
char*my_strcat(char*d,char*s){char*t=d;while(*t)t++;while((*t++=*s++));return d;}
int main(){ char a[200],b[100]; fgets(b,100,stdin);
char*p=b;while(*p&&*p!='\n')p++; if(*p=='\n')*p=0;
my_strcpy(a,b); printf("%s %zu\n",a,my_strlen(a));
my_strcat(a,"-app"); printf("%s",a);}