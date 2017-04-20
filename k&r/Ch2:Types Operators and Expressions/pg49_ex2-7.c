#include<stdio.h>


invert(unsigned int x,unsigned int p,unsigned int n)
{

unsigned int y= ~(((x >> (p+1-n)) & ~(~0<<n))<<(p+1-n));
unsigned int z=  x | ((~(~0 << n))<<(p+1-n));

printf("result=%d\n",(unsigned int) y & z);

/*
Explanation:
x=101 101 10


y=	111 010 11	(mask with just required bits inverted)
z=	101 111 10	(mask required bit in x as 1)
Result=	101 010 10	(multiply)



*/

}

main()
{

invert(182,4,3);




}
