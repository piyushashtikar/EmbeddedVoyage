#include <stdio.h>
#define IN	1 /*Inside Word*/
#define OUT	0 /*Outside Word*/

main() {
int i,c,nc,state;

i=nc=0;
state=OUT;

while((c=getchar())!=EOF)
{

if(c==' ' || c== '\t' || c== '\n'){
	state=OUT;
	
	for(i=0;i<nc;i++)
	printf("| ");
	printf("\n");
	nc=0;
}

else if (state==OUT){
	state=IN;
	nc++;
	
}

else if(state==IN)
nc++;

}



}
