#include<string.h>
#include<stdio.h>
void main()
{
char s[50],dup;
int count=0,i;

printf("Enter your string..\n");
scanf("%[^\n]",s);

for(i=0;s[i];i++)
{
	switch(s[i])
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
                case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': count++;
			  break;
	}

}


printf("%d are vowels..\n",count);
}
