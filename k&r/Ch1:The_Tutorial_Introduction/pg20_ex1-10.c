#include<stdio.h>

main()

{
int c;

while((c=getchar()) != EOF){

if(c=='\t')
printf("\\t");

if(c== '\b')
printf("<backspace>");

if(c=='\\')
printf("\\ \b\\");

if(c!='\t'){
	if(c!= '\b'){
		if(c!='\\')
		putchar(c);
	}
}

}

}
