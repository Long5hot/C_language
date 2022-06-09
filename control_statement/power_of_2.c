#include<stdio.h>
void main()
{
int num;
printf("Enter the number..:\t");
scanf("%d",&num);
if (num%2==0)
{
if (num&(num-1))
	printf("Just Even....\n");
else
	printf("Power of 2..\n");
}
else printf("Odd..\n");
}
