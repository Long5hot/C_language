#include<stdio.h>
void main()
{
int i,dup,num,fact;
printf("Enter Number:\t");
scanf("%d",&num);

for(i=1,fact=1;i<=num;i++)
{
fact= fact*i;
}
printf("Fact= %d\n",fact);
}
