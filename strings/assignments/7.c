#include<stdio.h>
void main()
{
char s[50],temp;
int i,j;

printf("Enter your string..\n");
scanf("%[^\n]",s);

for(j=0;s[j];j++);

for(i=0,j=j-1;i<j;i++,j--)
{
	if(s[i]!=s[j])
	{
		printf("Not Palindrome..\n");
		return;	
	}

}

printf("Palindrome...\n");


}
