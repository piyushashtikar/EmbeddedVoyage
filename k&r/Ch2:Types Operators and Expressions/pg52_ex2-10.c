#include<stdio.h>


int lower(unsigned int x)
{

return((x<91)?(x-'A'+'a'):x);


}

main()
{
printf("\n\n%c\n\n",lower('c'));
}
