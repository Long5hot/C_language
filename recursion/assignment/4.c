#include<stdio.h>

int reverse(int);
void main()
{
	int total,new;
	printf("Enter the number..\t");
	scanf("%d",&new);
	total = reverse(new);
	printf("%d \n",total);

}

int reverse(int num)
{	
	int rem;	
	static int rev=0;
	if(num)
	{	
		rem = num%10;
		rev = rev*10 + rem;
		reverse(num/10);
	return rev;
	}
}
