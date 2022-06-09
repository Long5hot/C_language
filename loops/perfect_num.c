#include<stdio.h>
void main()
{
int num,dup,rem,sum;
printf("Num :\t");
scanf("%d",&num);

for(dup=num,sum=0;dup;dup = dup/10)
{
	rem = dup%10;
	sum = sum + rem;
}
if (num ==sum) printf("Perfect Num..\n");
else printf("Not perfect\n");
}
