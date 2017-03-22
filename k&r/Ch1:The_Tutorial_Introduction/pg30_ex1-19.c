#include <stdio.h> 
#define MAXLINE 30 /* A SMALL NUMBER FOR TESTING */ 
int my_getline(char line[], int maxline); 
void reverse(char line[]); 

main() 
{ 
int c; char line[MAXLINE]; 

while (my_getline(line, MAXLINE) > 0) { 
reverse(line); 
printf("%s\n", line); 
} 
printf("\nEND OF PROGRAM\n"); 

return 0; 
}


int my_getline(char s[], int lim) 
{ 
int c, i; 
i = 0; 
while ((c = getchar()) != EOF && c != '\n') 
if (i < lim - 1) { 
s[i] = c; 
++i; 
} 

s[i] = '\0'; 
return i; 

}


void reverse(char s[]) 
{ 
int i,charcount;
charcount=0;
char temp;

while(s[charcount++]!='\0');

charcount-=1;

for(i=0;i< (charcount/2) ;i++)
{
temp=s[i];
s[i]=s[charcount-1-i];
s[charcount-1-i]=temp;
}

s[charcount]='\0';

}  
