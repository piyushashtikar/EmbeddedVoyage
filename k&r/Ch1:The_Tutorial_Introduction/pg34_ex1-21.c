/*Entab*/
#include<stdio.h>

#define MAXLINE	200
#define SPACE_COLUMNS	8
#define MAX_SPACES	SPACE_COLUMNS*4

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
char _spaces[MAX_SPACES];
int spaceflag=0;

while((c=getchar())!=EOF && c!='\n') 
if(nchars< len-1) {

if(c==' '){
nspaces++;
continue;
}

if(nspaces==0) {
line[nchars]=c;
++nchars;
nspaces=0;
continue;
}

else if(nspaces<SPACE_COLUMNS) {
for(i=0;i<nspaces;i++){
line[nchars]=' ';
++nchars;
}
nspaces=0;
line[nchars++]=c;
continue;
}


else {
for(i=0;i<nspaces/SPACE_COLUMNS;i++){
line[nchars++]='\t'; }

for(i=0;i<nspaces%SPACE_COLUMNS;i++) {
line[nchars++]=' ';  }

line[nchars++]=c;
nspaces=0;
continue;
}



}

line[nchars]='\0';
return nchars;

}

