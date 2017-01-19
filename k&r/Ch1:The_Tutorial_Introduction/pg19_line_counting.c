#include <stdio.h>

main(){
int n1,c;

n1=0;
while((c=getchar())!= EOF){
	if(c=='\n')
	n1++;
}

printf("Number of lines counted=%d\n",n1);



}
