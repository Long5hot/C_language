#include<stdio.h>
void main()
{
int i,j,k,count,flag;
char s[50];
printf("Enter your string..:\n");
scanf("%[^\n]",s);

for(i=0;s[i];i++)
{
	for(j=i-1,flag=0;j>=0;j--)
	{
		if(s[i]==s[j])
		{
			flag=1;
			break;
		}
	}
	
	if(flag==0)
	{
		for(k=i+1,count=1;s[k];k++)
		{
			if(s[k]==s[i])
			{
				count++;
			}	
		}
	if(count>1&&s[i]!=' ')
	printf("%c is repeated %d times..\n",s[i],count-1);
	}
}



}
