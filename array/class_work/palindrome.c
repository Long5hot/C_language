#include<string.h>
#include<stdio.h>
void main()
{
char s[50],k[50];
int flag, i,j,l;

printf("Enter a string...:\t");
scanf("%s",s);

l = strlen(s);

printf("s string : %s\n",s);
l--;
for(i =0, flag = 0; s[i]; i++,l--)
{
if(s[i] != s[l]) {
flag = 1; break;
}
}

if(!flag)
printf("\npalindrome \n");
else printf("\nNot palindrome..\n");
}
