#include<stdio.h>
void reverse(char *s,int );
void main()
{
char s[20] = "Hello World";
int i,size;

for(size=0;s[size];size++);

reverse(s,size-1);

printf("%s\n",s);
}

void reverse(char *s,int size)
{
	char temp;
	static int i;

	if(i<size)
	{
		temp = s[i];
		s[i] = s[size];
		s[size] =temp;
		i++;
		size--;
		reverse(s,size);
	}
}
