#include<stdio.h>
#define MAXLINE	1000

int my_getline(char line[], int maxline);
void my_copy(char to[],char from[]);

main()
{


int len; //Length of current line
int max; //Max length of line seen so far
int c;


char line[MAXLINE];
char longest[MAXLINE];

max=0;

while((len=my_getline(line,MAXLINE)) > 0) {

	if(line[len-1]!='\n'){
	while((c=getchar())!=EOF && c!='\n' )
	++len;
	if(c=='\n')
	++len;
	}

	if(len>max){
	max=len;
	my_copy(longest,line);
	}

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

void my_copy(char to[],char from[]){

int i=0;

while((to[i]=from[i])!= '\0')
	++i;
printf("copied %d\n",i);

}



