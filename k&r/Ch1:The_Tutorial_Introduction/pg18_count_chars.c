#include <stdio.h>

main()
{
long nc;
nc=0;
printf("Note:In linux Ctrl + D is treated as EOF\n");
while(getchar() != EOF) {

nc++;
}
printf("Entered Characters=%ld\n",nc);
}
