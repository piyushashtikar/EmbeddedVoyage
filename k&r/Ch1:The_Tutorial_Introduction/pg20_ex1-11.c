#include<stdio.h>

main() {


printf("Observation 1:Pressing Ctrl+D in first line itself doesn't show even one line. or pressing ctrl + D in between line counts one line less\n\n");

printf("Observation 2:If place where I trigger EOF is not a new line, then I have to press EOF twice:\n\n");
printf("Explanation:\n");
printf("On Unix-like systems (at least by default), an end-of-file condition is triggered by typing Ctrl-D at the beginning of a line or by typing Ctrl-D twice if you're not at the beginning of a line.\n");

printf("In the latter case, the last line you read will not have a '\n' at the end of it; you may need to allow for that.\n");

printf("This is specified (rather indirectly) by POSIX / The Open Group Base Specifications Issue 7, in section 11, specifically 11.1.9:\n\n");

    printf(" EOF\n");
    printf("\tSpecial character on input, which is recognized if the ICANON flag is set. When received, all the bytes waiting to be read are immediately passed to the process without waiting for a <newline>, and the EOF is discarded. Thus, if there are no bytes waiting (that is, the EOF occurred at the beginning of a line), a byte count of zero shall be returned from the read(), representing an end-of-file indication. If ICANON is set, the EOF character shall be discarded when processed.\n\n");


}
