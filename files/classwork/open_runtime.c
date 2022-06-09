#include<stdio.h>
void main()
{
FILE *fp;

printf("Enter file you want to open..\n");
char s[20];

scanf("%s",s);

fp = fopen(s,"r");

if(fp==0) printf("not present\n");
else printf("Present..\n");


}
