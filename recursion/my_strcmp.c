#include<stdio.h>
int my_strcmp(char *,char *);

void main()
{
    char s[] = "TODAY";
    char d[] = "TODAY";
    int des;
    des = my_strcmp(s,d);
    printf("%d\n",des);
    if(des==0){
        printf("Equal\n");
    }
    else printf("Not Equal\n");
}

int my_strcmp(char *s, char *d)
{
    static int i;
    if(s[i]=='\0') {
        return 0;
    }
    else if(s[i]!=d[i]) {
        return 1;
    }        
    else {
        i++;
        return 0 + my_strcmp(++s,++d);
    }

}