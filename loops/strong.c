#include<stdio.h>
void main()
{
int i,dup,sum, num,rem,fact;
printf("Enter num :\t");
scanf("%d",&num);

for(dup=num,sum=0; dup;dup=dup/10)
{	
rem = dup%10;
for(i=1,fact=1;i<=rem;i++)
fact = fact*i;
sum = sum + fact;
}
if(sum==num) printf("Strong NUmber..\n");
else printf("Not strong number..\n");
}
