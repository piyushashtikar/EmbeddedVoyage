#include<stdio.h>
#define MAXLINE	1000

int my_getline(char line[], int maxline);


main()
{


int len; //Length of current line
int max; //Max length of line seen so far
int c;


char line[MAXLINE];
char longest[MAXLINE];

max=0;

while((len=my_getline(line,MAXLINE)) > 0) {

if(len>80)
printf("%s",line);


}

if(max>0) //there was aline
printf("%s",longest);

printf("Max line length=%d\n",max);

return 0;

}

int my_getline(char s[],int limit){

int i,c;

for(i=0;i<limit-1 && (c=getchar())!=EOF && c!='\n';++i )
s[i]=c;

if(c=='\n') {
s[i]=c;
++i;
}

s[i]='\0';

return i;

}




