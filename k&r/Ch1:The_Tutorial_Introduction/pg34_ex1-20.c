#include<stdio.h>

#define MAXLINE	200
#define SPACE_COLUMNS	8


int my_getline(char line[],int length);

main() {
char line[MAXLINE];

while(my_getline(line,MAXLINE) > 0)
printf("%s\n",line);
}


int my_getline(char line[],int len){
int i,c;
int nchars=0;
int tabflag=0;
int nspaces=0;

while((c=getchar())!=EOF && c!='\n') 
if(nchars< len-1) {

if(c==9) { //TAB

if(nchars>SPACE_COLUMNS)
nspaces=SPACE_COLUMNS-(nchars%SPACE_COLUMNS);
else
nspaces= SPACE_COLUMNS-nchars;

for(i=0;i< nspaces;i++) //Put calculated number of spaces
line[nchars++]=' ';
continue;
}


line[nchars]=c;
++nchars;
}

line[nchars]='\0';
return nchars;

}

