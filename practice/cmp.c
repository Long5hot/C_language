#include<stdio.h>
int cmp(char *,char *);
void main()
{
	char s[] = "12345";
	char t[] = "12345";
	int k = cmp(s,t);

	if(k==0)
		printf("Equal\n");
	else printf("NOt \n");	

}

int cmp(char *p, char *q)
{
	if(*p==*q)
	{
		if(*p!=*q)
			return 1;
		
		cmp(p+1,q+1);
		if(*p=='\0')
			return 0;
	}
	if(*p=='\0')
		return 0;
	else return 1;

}
