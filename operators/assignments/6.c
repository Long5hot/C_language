#include<stdio.h>
void main()
{
int num;
printf("Enter Number:\t");
scanf("%d",&num);
if(!(num&7)) printf("Number divisible by 8\n");
else printf("Nope\n");

}
