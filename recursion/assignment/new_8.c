#include<stdio.h>
static int rev;
int palindrome(int);
void main()
{
	int i,var;
	
	for(i=101;i<201;i++)
	{
		rev = 0;
		var = palindrome(i);
		if(var == 1) printf("%d ",i);		
	}
	

}

int palindrome(int num)
{
	if(num)
	{
		rev = rev*10 + num%10;
		palindrome(num/10);
		if(num == rev) return 1;
		else return 0;
	}


}
