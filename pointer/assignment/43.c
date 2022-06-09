#include <stdio.h>
void main()
{
char *s= "hello";
char *p = s;
printf("%c\t%c\n", 1[p], s[1]);
printf("%c %s\n", p+1,&s[1]);
}
