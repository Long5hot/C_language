#include<stdio.h>
void main()
{
char s[20];

FILE *fp = fopen("data","r");

fgets(s,8,fp);

printf("s = %s\n",s);



}
