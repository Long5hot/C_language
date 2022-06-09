#include<stdio.h>
#include<string.h>
void main()
{
int i,j,m,c,count=0,l;
char s[] = "geeksforgeeks";
char k[] = "ee";

for(i=0;s[i];i++)
	{
		for(j=0,m=i;k[j];j++)
			if(s[m]==k[j])
				{
				for(l=0;s[m]==k[j];m++,l++,c++);
				if(c==(strlen(k))) count++;
				}
//			else break;
			
	}

printf("%d times\n",count);
}
