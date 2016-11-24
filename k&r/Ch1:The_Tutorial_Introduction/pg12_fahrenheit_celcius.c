/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */
/*This is comment */

#include<stdio.h>

main()
{
float i,fahr, celsius;
int upper,lower,step;

upper=300;
lower=0;
step=20;

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

