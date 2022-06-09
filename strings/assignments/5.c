#include<string.h>
#include<stdio.h>
void main()
{
char s[50],d[50];
int count=0,i,j;

printf("Enter your string..\n");
scanf("%[^\n]",s);
scanf(" %[^\n]",d);
for(i=0;s[i];i++);
for(j=0;d[j];j++);

if(i==j) {
for(i=0;s[i];i++)
{
	if(s[i]!=d[i]) {
	printf("They are not equal..\n");
		break;	
	}
	
}
if(s[i]==d[i]) printf("They are equal..\n");
}
else printf("They are not equal..\n");

}
