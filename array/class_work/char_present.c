#include<string.h>
#include<stdio.h>
void main()
{ 
	char s[20],k[122]= {};
	int i,j,flag;

	printf("Enter your string here....\t");
	scanf("%s",s);

	for(i =0; s[i]; i++)
	{
		char c = s[i];
		int ascii = c;
		k[ascii] = k[ascii] +1;

	}

	for(i=97; i<122;i++)
	{
		char c = i;
		if(k[i]!=0)
			printf(" %c= %d \n",c,k[i]);
	}
}
