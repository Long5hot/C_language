#include<stdio.h>
int realNumber = 0;
int sum_factors(int);
void main()
{
	int total,new;
	printf("Enter the number..\t");
	scanf("%d",&new);
	realNumber = new;
	total = sum_factors(new);
	printf("%d \n",total);

}

int sum_factors(int num)
{
	static int sum=0;
	if(num)
	{
	if(realNumber%num==0 && realNumber!=num)
	{
		sum = sum+num;
	}
	sum_factors(num-1);
	return sum;
	}

}


//while(i)
//{
//	if(num%i==0) sum = sum+i;




//}
