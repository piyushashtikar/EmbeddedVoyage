/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */
/*This is comment */

#include<stdio.h>

int fahr_to_celsius(int,int,int);

main()
{

int upper,lower,step;

upper=300;
lower=0;
step=20;

//if(fahr_to_celsius(upper,lower,step)==0)
printf("Conversion success=%d\n",fahr_to_celsius(upper,lower,step));


return 0;

}





int fahr_to_celsius(int upper,int lower,int step)
{

float i,fahr, celsius;

fahr=lower;

while(fahr<=upper)
{
celsius=5.0/9.0 * (fahr-32);
printf("%3.0f\t%6.1f\n",fahr,celsius); 
/*
Numbers right justified.
*/
fahr=fahr+step;
}


}

