#include<stdio.h>
void main()
{
int sum,num,rem,dup;
printf("Enter :\t");
scanf("%d",&num);

for(dup=num,sum=0;dup;dup=dup/10)
	{rem = dup%10;
	sum += (rem*rem*rem);
	}
if (num == sum)
	printf("Armstrong...\n");
else printf("No Armstrong..\n");
}
