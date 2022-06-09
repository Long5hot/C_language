#include<stdio.h>
int sum_digits(int);
void main()
{
	int total,new;
	printf("Enter the number..\t");
	scanf("%d",&new);
	
	total = sum_digits(new);
	printf("Total = %d\n",total);

}

int sum_digits(int num)
{
	int rem;
//	static int sum;
	if(num)
	{
	rem = num%10;
	return rem + sum_digits(num/10);
	}


}
