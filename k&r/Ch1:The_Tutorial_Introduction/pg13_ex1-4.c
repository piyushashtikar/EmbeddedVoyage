/* print Celsius to Fahrenheit table
for fahr = 0, 20, ..., 300 */
/*This is comment */

#include<stdio.h>

main()
{
float fahr, celsius;
int i,upper,lower,step;

upper=300;
lower=0;
step=20;

celsius=lower;

printf("Celsius to Fahrenheit conversion table\n");
while(celsius<=upper)
{
fahr=(9.0/5.0 * celsius)+32;
printf("%3.0f\t%6.1f\n",celsius,fahr); 
/*
Numbers right justified.
*/
celsius=celsius+step;
}




}

