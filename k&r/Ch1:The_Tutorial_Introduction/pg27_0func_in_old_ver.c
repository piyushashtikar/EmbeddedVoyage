#include <stdio.h>
int add();

main() {

int result=add(2,3);
printf("Addition is %d\n",result);
return 0;

}

add(a,b)
int a,b;
{

return a+b;


}

