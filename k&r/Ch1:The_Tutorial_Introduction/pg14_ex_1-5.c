/* print Fahrenheit-Celsius table
for fahr = 300,280... */


#include<stdio.h>

main()
{
int fahr;
printf("Farenheit to Celsius table in reverse\n");

for(fahr=300;fahr>=0;fahr-=20) {
printf("%d\t%6.1f\n",fahr, 5.0/9.0 * (fahr-32.0));
}
//celsius=5.0/9.0 * (fahr-32);


}

