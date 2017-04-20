#include<stdio.h>


int bitcount(unsigned int x)
{
int counter=0;

while(x&=(x-1))
counter++;

return counter+1;
}

main()
{
printf("%d",bitcount(182));
}
