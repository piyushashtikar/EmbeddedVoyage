#include <stdio.h>

main()
{
printf("Note:In linux Ctrl + D is treated as EOF\n");
printf("\n\t%d\n",(int)getchar()!=  EOF);

}
