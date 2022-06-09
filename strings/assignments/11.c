#include<stdio.h>
#include<string.h>
void main()
{
	int i,j;
	char s[50],ss[50],des[50],temp,dummy[50];
	printf("Input two string..\n");

	scanf("%[^\n]",s);
	scanf(" %[^\n]",ss);

	if(strlen(s)>strlen(ss)) 
	{
		for(i=0,j=0;s[i];i++)
		{	
			if(i<strlen(ss))
			{
				des[j]=s[i]; j++;
				des[j]=ss[i]; j++;
			}
			else
			{
				des[j] = s[i]; 
				j++;
			}
		}
		des[j] = '\0';
	}
	else
	{
		for(i=0,j=0;ss[i];i++)
		{	
			if(i<strlen(s))
			{
				des[j]=s[i]; j++;
				des[j]=ss[i]; j++;
			}
			else
			{
				des[j] = ss[i]; 
				j++;
			}
		}
		des[j] = '\0';
	}
	printf("%s\n\n",des);


}
