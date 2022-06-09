#include<stdio.h>
#include<string.h>
void rev(char *,char *);

void main()
{

	char s[] = "321";

	char *q = s;

	int i = strlen(s)-1;

	q = q +i;

	printf("%s\n",s);

	rev(s,q);

	printf("%s\n",s);


}

void rev(char *p, char *q)
{
	char ch;
	if(p<q)
	{
		ch = *p;
		*p = *q;
		*q = ch;
	rev(++p,--q);

	}
}








