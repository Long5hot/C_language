#include<stdio.h>
#include<string.h>
void main()
{
char s[50];
int i,j,lower=0,capital=0,space=0,digit=0,special=0;

printf("Enter your string..\n");
scanf("%[^\n]",s);

for(i=0;s[i];i++)
{	
	if (s[i]>=48 && s[i]<=57) digit++;
	else if(s[i]>=65 && s[i]<=90) capital++;
	else if(s[i]>=97 && s[i]<=122) lower++;
	else if(s[i]==' ') space++;
	else special++;


}
printf("\n");
printf("digit = %d,\ncapital = %d,\nlower = %d,\nspecial = %d,\nspaces = %d\n",digit,capital,lower,special,space);

}
