#include<stdio.h>

main()
{


int i;

for(i=0;i<10;i++){
printf("outside if\n");

if(1){
printf("inside if 1\n");
if(i==5)
{
printf("condition triggered\n");
continue;
}

}

}


//after condition triggered, outside if is printed, i.e flow goes to for not if(1)



}
