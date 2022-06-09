#include<stdio.h>
int palindrome(int);
static int reverse = 0;
static int sum = 0;
void main()
{
	int total,new;
	for(new=1;new<=100;new++) 
	{
		reverse = 0;
		sum = 0;
		total = palindrome(new);
		if(new==total) printf("%d ",total);
	}
printf("\n");
}

int palindrome(int num)
{	
       	int rem,new_reverse;
	if(num)
	{	rem = num%10;
		reverse = reverse*10 +rem;
		palindrome(num/10);
		return reverse;
	}
}
