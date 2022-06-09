#include<stdio.h>
#include<string.h>
void reverse(char *);
void my_strrev(char *,char*);
void main()
{
char s[50];
printf("Enter your string..:\n");
scanf("%[^\n]",s);

reverse(s);

//printf("%s\n",s);

//my_strrev(s,s+5);
char *p = s;
char *q;
while(q = strchr(p,' '))
	{
	my_strrev(p,q-1);
	p = q+1;
	}
reverse(p);
printf("%s \n",s);

}

void reverse(char * a)
{
int i,j;
char temp;
for(i=0,j=strlen(a)-1 ;i<j; i++,j--)
{
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

}
void my_strrev(char *p, char *q)
{
	char ch;
	while(p<q)
	{
	ch = *p;
	*p = *q;
	*q = ch;	
	p++;
	q--;
	}
}

