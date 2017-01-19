#include <stdio.h>

main(){
int num;
int c='a';
printf("\n\n\nNow '%c' is character constant equal to %d in character set\n",c,c);
printf("i.e. entering a character in single quotes ' ' is actually telling compiler to take equivalent ascii value of this character\n");

printf("Now i assign 97 to num, int num=97\n");
num=97;
printf("Printing num with percent c  format specifier= %c\n",num);

if('a' == 97)
printf("This proves 'a' is equal to 97\n\n\n");



}
