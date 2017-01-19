#include<stdio.h>

main()

{
int c;

while((c=getchar()) != EOF){

if(c=='\t')
printf("\\t");

if(c== '\b')
{printf("\\");
printf("b");}

/*
Terminal will eat backslash
Nothing wrong here. If you were to run this program on a file that contained the backslash character, it would properly convert it. For terminal input, the program will not receive the backslash as it is managed by the input routines.

If you still want to use it on terminal use 127 insted of '\b', then use command stty erase '' or stty erase \b , to change default behaviour of terminal. 
*/


if(c=='\\')
printf("\\\\");

if(c!='\t'){
	if(c!= '\b'){
		if(c!='\\')
		putchar(c);
	}
}

}

}
