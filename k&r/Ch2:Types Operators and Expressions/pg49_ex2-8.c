#include<stdio.h>


int rightrot(unsigned int x,unsigned int n)
{
/*backup last n digits*/
int backup_last_n= x & (~(~0<<n));
/*Right shift x by n*/
x=x>>n;
/*make first n digits of x as 0*/
x=x & (~(~0<<((8*sizeof(int))-n)));
/*shift backup last n digits to extreme left*/
backup_last_n=backup_last_n<<((8*sizeof(int))-n);
/*result=x & backup_last_n*/

return(x | backup_last_n);
}

main()
{

printf("%d",rightrot(182,4));




}
