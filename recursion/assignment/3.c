#include<stdio.h>
int sum_digits(int);
void main()
{
	int total,new;
	printf("Enter the number..\t");
	scanf("%d",&new);
	total = sum_digits(new);
	printf("%d \n",total);

}

int sum_digits(int num)
{	
	static int sum =0;
       	int rem;
	if(num)
	{	rem = num%10;
		return rem + sum_digits(num/10);
	}

}
