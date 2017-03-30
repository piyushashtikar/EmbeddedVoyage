/*Write a program to determine the ranges of char, short,
int,and long variables, both signed and unsigned, by printing appropriate
values from standard headers and by direct computation*/

#include<stdio.h>
#include<limits.h>

main() {

unsigned char uchar;
unsigned short ushort;
unsigned int uint;
unsigned long ulong;

printf("\n\n------------------------------------\n");
printf("Signed char min=%d\n",SCHAR_MIN);
printf("Signed char max=%d\n",SCHAR_MAX);

uchar=~0;
uchar>>=1;

printf("Signed char min=%d\n",-uchar-1);
printf("Signed char max=%d\n",uchar);


printf("UnSigned char min=%u\n",0);
printf("UnSigned char max=%u\n",UCHAR_MAX);


printf("UnSigned char min=%u\n",0);
printf("UnSigned char max=%u\n",2*uchar+1);

printf("\n\n------------------------------------\n");
printf("Signed short min=%d\n",SHRT_MIN);
printf("Signed short max=%d\n",SHRT_MAX);


ushort =~0;
ushort>>=1;

printf("Signed short min=%d\n",-ushort-1);
printf("Signed short max=%d\n",ushort);

printf("UnSigned short min=%u\n",0);
printf("UnSigned short max=%u\n",USHRT_MAX);


printf("UnSigned short min=%u\n",0);
printf("UnSigned short max=%u\n",2*ushort+1);

printf("\n\n------------------------------------\n");

printf("Signed int min=%d\n",INT_MIN);
printf("Signed int max=%d\n",INT_MAX);


uint=~0;
uint >>=1;

printf("Signed int min=%d\n",-uint-1);
printf("Signed int max=%d\n",uint);


printf("UnSigned int min=%u\n",0);
printf("UnSigned int max=%u\n",UINT_MAX);

printf("UnSigned int min=%u\n",0);
printf("UnSigned int max=%u\n",2*uint+1);

printf("\n\n------------------------------------\n");

printf("Signed long min=%ld\n",LONG_MIN);
printf("Signed long max=%ld\n",LONG_MAX);


ulong=~0;
ulong>>=1;

printf("Signed long min=%ld\n",-ulong-1);
printf("Signed long max=%ld\n",ulong);


printf("UnSigned long min=%lu\n",(unsigned long)0);
printf("UnSigned long max=%lu\n",ULONG_MAX);


printf("UnSigned long min=%lu\n",(unsigned long)0);
printf("UnSigned long max=%lu\n",2*ulong+1);


}

