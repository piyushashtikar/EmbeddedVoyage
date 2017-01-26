#include<stdio.h>
#define YES	1
#define	NO	0

main() {

int c,newline_entered;
newline_entered=NO;

while((c=getchar())!=EOF){

if(c==' ' || c=='\t' || c=='\n')
{
if(newline_entered==NO)
putchar('\n');
newline_entered=YES;
}
else {
putchar(c);
newline_entered=NO;
}


}








}
