#include<stdio.h>

main()
{

char s[20];
int i,c;
int lim=20;

for (i=0; (i<lim-1) * ((c=getchar())!='\n') * (c != EOF);i++)
s[i]=c;

s[i]='\0';

printf("Result:%s\n",s);




}
