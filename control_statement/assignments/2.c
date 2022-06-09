#include<stdio.h>
void main()
{
int dup,rem,sum,num;
printf("Enter Number:\t");
scanf("%d",&num);

for(dup=num,sum=0;dup;dup=dup/10)
{
	rem = dup%10;
	sum = sum+rem;
}
printf("sum = %d\n",sum);
}
