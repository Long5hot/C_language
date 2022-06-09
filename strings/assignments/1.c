#include<stdio.h>
void main()
{
int i;
char s[] = "Hello World";
char *p = s;
for(i=0;p[i];i++);

printf("Len = %d, sizeof(s) = %d,sizeof(p)=%d\n\n",i,sizeof(s),sizeof(p));


}
