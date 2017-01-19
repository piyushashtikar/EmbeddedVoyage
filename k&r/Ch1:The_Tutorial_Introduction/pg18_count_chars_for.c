#include <stdio.h>

main()
{
double nc;
nc=0;
printf("Note:In linux Ctrl + D is treated as EOF & enter is treated as one character\n");

for(nc=0;getchar() != EOF; nc++)
;

printf("Entered Characters=%.0f\n",nc);
}
