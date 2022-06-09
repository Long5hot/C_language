#include<stdio.h>
#include<string.h>
void print(const char *s);
void main()
{
char *s = "abcd";

print(s);
printf("\n");


}

void print(const char *p)
{
	if(*p)
	{
		printf("%c",*p);
		print(p+1);
	}

}
