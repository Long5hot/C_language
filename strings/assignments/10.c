#include<stdio.h>
#include<string.h>
void main()
{
char s[50],ch;
int i,j;

printf("Enter your string..\n");
scanf("%[^\n]",s);


for(i=0;s[i];i++)
{
	if(s[i]>=65&&s[i]<=90)
		s[i]=s[i]+32;

}

printf("%s\n",s);
}
