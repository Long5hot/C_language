#include<stdio.h>
#include<string.h>
void main()
{
char s[50],ch;
int i,j;

printf("Enter your string..\n");
scanf("%[^\n]",s);

printf("Character you want to delete..:\t");
scanf(" %c",&ch);

for(i=0;s[i];i++)
{
if(ch==s[i])
{
	for(j=i;s[j];j++)
	{
	s[j]=s[j+1];
	}
	i--;
}
}

printf("%s\n",s);
}
