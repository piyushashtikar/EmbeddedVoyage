/*Write a program to determine the ranges of char, short,
int,and long variables, both signed and unsigned, by printing appropriate
values from standard headers and by direct computation*/

#include<stdio.h>
#include<limits.h>

main() {


printf("Signed char min=%d\n",SCHAR_MIN);
printf("Signed char max=%d\n",SCHAR_MAX);

printf("Default (signed/unsigned not mentioned) char min=%d\n",CHAR_MIN);
printf("Default (signed/unsigned not mentioned) char max=%d\n",CHAR_MAX);

printf("UnSigned char min=%d\n",0);
printf("UnSigned char max=%d\n",UCHAR_MAX);


printf("Signed short min=%d\n",SHRT_MIN);
printf("Signed short max=%d\n",SHRT_MAX);

printf("UnSigned short min=%d\n",0);
printf("UnSigned short max=%d\n",USHRT_MAX);


printf("Signed int min=%d\n",INT_MIN);
printf("Signed int max=%d\n",INT_MAX);

printf("UnSigned int min=%d\n",0);
printf("UnSigned int max=%u\n",UINT_MAX);


printf("Signed long min=%ld\n",LONG_MIN);
printf("Signed long max=%ld\n",LONG_MAX);

printf("UnSigned long min=%lu\n",(unsigned long)0);
printf("UnSigned long max=%lu\n",ULONG_MAX);

printf("pending...\n");


}

