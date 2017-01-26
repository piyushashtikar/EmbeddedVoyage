#include <stdio.h>
#define NO_OF_ALPHABETS		26

main() {
int i,c;
int nchar_arr[NO_OF_ALPHABETS];
int counter='a';
i=0;



for(i=0;i<NO_OF_ALPHABETS;i++)
nchar_arr[i]=0;


while((c=getchar())!=EOF)
{

for(counter='a';counter<='z';counter++){
if(c==counter)
nchar_arr[counter-'a']++;
}

} //while ends


//For printing
for(counter='a';counter<='z';counter++){
if(nchar_arr[counter-'a']==0)
continue;//skip printing if no occurance
printf("%c: ",counter);
for(i=0;i<nchar_arr[counter-'a'];i++)
printf("| ");
printf("\n");
}





}
