#include<stdio.h>
char * my_strchr(char *,char);

void main()
{
    char s[] = "today is sunday";
    char *q;
    q = my_strchr(s,'i');
    printf("%c\n",*q);
}
/*
char * my_strchr(char * s,char ch) {
    int i = 0;
    while(s[i]){
        if(s[i]==ch)
            break;
        s++;
        i++;
    }
    if(s[i]==ch)
        return s+i;
    else return NULL;
}*/

char * my_strchr(char *s,char ch)
{
    static int i = 0;
    if(s[i]==ch)
        return s+i;
    else if(s[i]=='\0'){
        return NULL;
    }
    else {
        i++;
        my_strchr(s+1,ch);
    }
}