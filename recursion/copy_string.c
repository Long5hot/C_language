#include<stdio.h>
#include<string.h>
void copy(const char *,char *);
void main()
{
char s[] = "abcd",d[10];

copy(s,d);
printf("d = %s\n",d);

}

void copy(const char*s, char*d)
{
	if(*s)	
	{
	*d=*s;
	copy(s+1,d+1);
	}
	else *d=*s;


} 
