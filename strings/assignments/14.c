#include<stdio.h>
void main()
{
char s[50];
int i,j,k;

printf("enter your string...:\n");
scanf("%[^\n]",s);

for(i=0;s[i];i++)
{

	for(j=i+1;s[j];j++)
	if(s[j]==s[i])
	{
		for(k=j;s[k];k++)
		s[k]=s[k+1];
	i--;	
	}

}
printf("%s\n",s);

}
