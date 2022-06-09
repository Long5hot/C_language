#include<stdio.h>
#include<string.h>
int length(const char *s);
void main()
{
char *s = "abcd";
int len_1;

len_1 = length(s);

printf("Len = %d",len_1);

printf("\n");


}
/*
int length(const char *p)
{
	static int len=0;
	if(*p)
	{
		length(p+1);
		 len++;
	}
return len;
}*/
/* Solving using auto variable*/

int length(const char *p)
{
	if(*p)
	return 1 + length(p+1);
	else return 0;
}







