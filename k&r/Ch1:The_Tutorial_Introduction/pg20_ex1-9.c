#include<stdio.h>

main()
{

int c,blank;
blank=0;


while((c=getchar()) != EOF){

	if(c==' '){
		if(blank==0){
			putchar(c);
			blank++;
		}
	}

	if(c!= ' '){
	putchar(c);
	blank=0;
	}
}
}
