#include<stdio.h>


setbits(unsigned int x,unsigned int p,unsigned int n, unsigned int y)
{
y=y & (~0 << n);
y=y |(x >> (p+1-n)) & ~(~0<<n); 

printf("y=%d\n",y);

}

main()
{

setbits(182,4,3,0);




}
