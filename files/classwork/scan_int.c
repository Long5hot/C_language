#include<stdio.h>
void main()
{
FILE *fp = fopen("new","r");

int a[5],i;

fread(a,4,1,fp);

for(i=0;i<5;i++)
printf("%d ",a[i]);
printf("\n");


}
