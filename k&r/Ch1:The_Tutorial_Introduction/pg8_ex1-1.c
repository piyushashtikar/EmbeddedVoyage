#include<stdio.h>

/*LEAVING stdio.h 

pg8_ex1-1.c:Warning: In function ‘main’:
pg8_ex1-1.c:6:1: warning: incompatible implicit declaration of built-in function ‘printf’ [enabled by default]
 printf("hello, ");  program puns fine
*/


/*
USE MY_MAIN() INSTEAD OF MAIN()

/usr/bin/ld: /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info): relocation 0 has invalid symbol index 11
/usr/bin/ld: /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info): relocation 1 has invalid symbol index 12
/usr/bin/ld: /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info): relocation 2 has invalid symbol index 2
/usr/bin/ld: /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info): relocation 3 has invalid symbol index 2
/usr/bin/ld: /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info): relocation 4 has invalid symbol index 11
/usr/bin/ld: /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info): relocation 5 has invalid symbol index 13
/usr/bin/ld: /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info): relocation 6 has invalid symbol index 13
/usr/bin/ld: /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info): relocation 7 has invalid symbol index 13
/usr/bin/ld: /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info): relocation 8 has invalid symbol index 12
/usr/bin/ld: /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info): relocation 9 has invalid symbol index 13
/usr/bin/ld: /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info): relocation 10 has invalid symbol index 13
/usr/bin/ld: /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info): relocation 11 has invalid symbol index 13
/usr/bin/ld: /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info): relocation 12 has invalid symbol index 13
/usr/bin/ld: /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info): relocation 13 has invalid symbol index 13
/usr/bin/ld: /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info): relocation 14 has invalid symbol index 13
/usr/bin/ld: /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info): relocation 15 has invalid symbol index 13
/usr/bin/ld: /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info): relocation 16 has invalid symbol index 13
/usr/bin/ld: /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info): relocation 17 has invalid symbol index 13
/usr/bin/ld: /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info): relocation 18 has invalid symbol index 13
/usr/bin/ld: /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info): relocation 19 has invalid symbol index 21
/usr/bin/ld: /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_line): relocation 0 has invalid symbol index 2
/usr/lib/gcc/x86_64-linux-gnu/4.8/../../../x86_64-linux-gnu/crt1.o: In function `_start':
(.text+0x20): undefined reference to `main'
collect2: error: ld returned 1 exit status

BUT

if you compile it as gcc pg8_ex1-1.c -c
it compiles in object file.
Running this object file with ./ produces exec format error

NOW

main a new file with name main_pg8_ex1-1.c
with main() and call my_main from there
Compiling main_pg8_ex1-1.c
gcc pg8_ex1-1.o main_pg8_ex1-1.c -o pg8_ex1-1.o runs fine



*/

main()
{

/*

REMOVE main() alltogether


pg8_ex1-1.c:52:1: error: expected ‘;’ before ‘}’ token
 }
 ^
*/

printf("hello, ");
/*
REMOVE BEGINNING QUOTES OF HELLO:

pg8_ex1-1.c: In function ‘main’:
pg8_ex1-1.c:11:8: error: ‘hello’ undeclared (first use in this function)
 printf(hello, ");
        ^
pg8_ex1-1.c:11:8: note: each undeclared identifier is reported only once for each function it appears in
pg8_ex1-1.c:11:15: warning: missing terminating " character [enabled by default]
 printf(hello, ");
               ^
pg8_ex1-1.c:11:1: error: missing terminating " character
 printf(hello, ");
 ^
pg8_ex1-1.c:14:16: error: expected ‘)’ before ‘;’ token
 printf("world");
                ^
pg8_ex1-1.c:17:1: error: expected ‘;’ before ‘}’ token
 }
 ^
*/



printf("world");

/*
WRITE PRINT INSTEAD OF PRINTF

/tmp/ccIOaTbf.o: In function `main':
pg8_ex1-1.c:(.text+0x1e): undefined reference to `print'
collect2: error: ld returned 1 exit status
*/


printf("\n");

/*

Remove semicolon after printf("\n")

pg8_ex1-1.c: In function ‘main’:
pg8_ex1-1.c:52:1: error: expected ‘;’ before ‘}’ token
 }
 ^
*/


}
