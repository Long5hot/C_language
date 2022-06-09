#include<stdio.h>
void main()
{
int a,b,num,dup,sum,rem;
printf("Enter Limits:\t");
scanf("%d%d",&a,&b);
for(num=a;num<=b;num++)
{
for(dup = num,sum=0;dup;dup=dup/10)
	{
	rem =dup%10;
	sum = sum + rem*rem*rem;
	}

if(num==sum) printf("%d ",num);
}


}
