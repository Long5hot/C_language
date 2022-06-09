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
	temp = s[i];
	s[i]=s[j];
	s[j]=temp;

}

printf("%s\n",s);
}
