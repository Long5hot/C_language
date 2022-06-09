#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],ss[50];
    int i, j, dummy_i, count=0, len;
    
    printf("First string:\t");
    gets(str);
    printf("substring:\t");
    gets(ss);
    
    for(i=0;str[i];i++)
    {
        dummy_i=i;
        if(ss[0]!=str[dummy_i])
            continue;
        else
            for(j=0,len=0;j<strlen(ss);j++)
	    {    
		 if(ss[j]!=str[dummy_i]) break;
		 else {
		 dummy_i++;
		 len++;
		}
	    }    
        
        if(len==strlen(ss)) count++;
    }
    
    
    printf("%s is present %d times\n",ss,count);
    
    
}
