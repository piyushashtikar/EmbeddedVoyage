#include<stdio.h>
#define STRING_MAX_LENGTH	20 

sqeeze(char s1[],char s2[])
{
int i,j,k;
k=0;
int foundflag=0;
char result[STRING_MAX_LENGTH];
for(i=0;s1[i]!='\0';i++){



for(j=0;s2[j]!='\0';j++){
if(s1[i]==s2[j]){
foundflag=1;
break;
}
}

if(foundflag==0)
result[k++]=s1[i];


printf("%c",s1[i]);
foundflag=0;
}
printf("\n\n");
result[k]='\0';
printf("%s\n\n",result);

}

main() 
{

char* s1="hihelloi";
char* s2="hi";

sqeeze(s1,s2);

}
