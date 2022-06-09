#include<stdio.h>
void main()
{
int sum,num,dup,rem;
printf("Enter :\t");
scanf("%d",&num);

for(dup=num,sum=0;dup;dup=dup/10  )
{	rem = dup%10;
	sum = sum + rem;	
}
printf("Sum : %d\n",sum);
}
