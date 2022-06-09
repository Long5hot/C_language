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
	static int len = 0;
	if(len<=strlen(p))
	{
		printf("%c",p[len]);
		len++;
		print(p);
	}

}
