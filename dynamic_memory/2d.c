#include<stdlib.h>
#include<stdio.h>
void main()
{
int i,n=5;

char **p;
p = malloc(sizeof(char*)*n);
for(i=0;i<5;i++)
p[i] = malloc(sizeof(char )*10);


}
