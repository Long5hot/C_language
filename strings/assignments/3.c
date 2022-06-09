#include<string.h>
#include<stdio.h>
void main()
{
char s[50],dup;
int count=0,i;

printf("Enter your string..\n");
scanf("%[^\n]",s);
printf("Enter the charcter you want to find repeatations..\n");
scanf(" %c",&dup);

for(i=0;s[i];i++)
{
	if(s[i]==dup)
		count++;

}

printf("%d times present..\n",count);



}
