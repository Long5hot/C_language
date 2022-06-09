#include<stdio.h>
int fib(int num);
void main()
{

int num,i;
printf("Enter Elements : \n");
scanf("%d",&num);

for(i=0;i<=num;i++)
	{	
		if(i==0) printf("0 ");
		printf("%d ",fib(i));
	}
}

int fib(int num)
{
	if (num==0||num==1)
		return 1;
	else return fib(num-1) + fib(num-2);
}
