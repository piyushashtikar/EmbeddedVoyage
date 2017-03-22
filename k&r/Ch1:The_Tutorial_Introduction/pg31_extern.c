#include<stdio.h>

int externvar;


void my_func();

main()
{
externvar=9;

printf("in main:%d\n",externvar);

my_func();

printf("Again in main:%d\n",externvar);



}

void my_func(){
int externvar =88;
printf("in my_func:%d\n",externvar);

}
