#include <stdio.h>
#define IN	1 /*Inside Word*/
#define OUT	0 /*Outside Word*/

main() {
int c,nl,nw,nc,state;

nl=nw=nc=0;

while((c=getchar())!=EOF)
{
nc++;

if(c=='\n')
	nl++;

if(c==' ' || c== '\t' || c== '\n')
	state=OUT;

else if (state==OUT){
	state=IN;
	nw++;
}

}

printf("\nCharacters: %d\nWords: %d\nLines: %d\n",nc,nw,nl);


}
