#include<stdio.h>

main()
{

printf("Hello,World \c ");

}

/*
RESULT
WARNING:
pg8_ex1-2.c: In function ‘main’:
pg8_ex1-2.c:6:8: warning: unknown escape sequence: '\c' [enabled by default]
 printf("Hello,World \c ");

BUT

a.out is made and result is 
Hello,World  c

*/
