#include<stdio.h>

main(){

int c,n_blanks,n_tabs,n_newlines;

n_blanks=n_tabs=n_newlines=0;

while((c =getchar())!=EOF){
if(c==' ')
n_blanks++;
else if(c=='\t')
n_tabs++;
else if(c=='\n')
n_newlines++;
//printf("new line=%d\n",n_newlines);
}

printf("%15s :%2d\n%15s :%2d\n%15s :%2d\n","Blanks",n_blanks,"Tabs",n_tabs,"New Lines",n_newlines);


}
