#include<stdio.h>
char * my_strchr(char *,char ch);

void main()
{
printf("String :   ");
char s[50];

scanf("%[^\n]",s);

char ch;

scanf(" %c",ch);

char * add;
add = my_strchr(s,ch);
printf("*add = %u, add = %u",*add,add);

}

char * my_strchr(char *s,char ch)
{
	char *p = s;
	while(*p!=ch)
		p++;

	return p-s;


}

