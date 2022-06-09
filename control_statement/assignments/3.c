#include<stdio.h>
void main()
{
int num,rev,dup,rem;
printf("Enter Number:\t");
scanf("%d",&num);

for(dup=num,rev=0;dup;dup=dup/10)
{
	rev = rev*10 + dup%10;
}
printf("rev = %d\n",rev);
}
