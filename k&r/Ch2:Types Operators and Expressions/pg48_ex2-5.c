#include<stdio.h>
#define STRING_MAX_LENGTH	20 

int any(char s1[],char s2[])
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

if(foundflag==1){
return i;
}

foundflag=0;
}


}

main() 
{

char* s1="hihelloi";
char* s2="hi";

printf("found at location=%d\n",any(s1,s2));

}
