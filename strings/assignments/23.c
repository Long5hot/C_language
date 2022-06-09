#include<string.h>
#include<stdio.h>
void main()
{
	int key,i,key_multiple,j,temp;
	char s[50];

	printf("Enter the string..\n");
	scanf("%[^\n]",s);
	printf("\n");

	printf("Enter the key..\n");
	scanf("%d",&key);

	for(i=1,key_multiple=0; key_multiple<strlen(s) ;i++)
	{
		key_multiple = i*key;
		if(key_multiple == s[strlen(s)-1])
			continue;
		for(j=0;s[j];j++)
		{
			if(s[j]==' ')
			{	
				if(key_multiple==j)
				{	temp = s[j+1];
					s[j+1] = s[j-1];
					s[j-1] = temp;	
				}
				else { j++; key_multiple++;}
			}
			else if(key_multiple == j)
			{
				temp = s[j];
				s[j] = s[j-1];
				s[j-1] = temp;
				break;
			}
		}	


	}



	printf("%s\n",s);






}
