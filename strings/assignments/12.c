#include<string.h>
#include<stdio.h>
void main()
{
int i,count=0;
char s[50];
printf("Enter your string..:\n");
scanf("%[^\n]",s);

if(s[0]==' ') count--;
if(s[strlen(s)-1]==' ') count--;
for(i=0;s[i];i++)
{
	if(s[i]==' ')
		count++;
	
}
printf("%d Words..\n\n",count+1);

}
