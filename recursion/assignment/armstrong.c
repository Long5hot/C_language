#include<stdio.h>
#include<math.h>
int realNumber;
int power(int,int);
int armstrong(int);
void main()
{
	int r,k,new_one;
	k = 153;
	realNumber = k;
		new_one = armstrong(k);
		if(new_one==realNumber) 		
			printf("%d ",realNumber);



}



int power(int num,int realNumber)
{
	int i,dup,times;
	for(dup=realNumber,times=0;dup;dup/10,times++);
	
	for(dup = 1,i=1;i<times;i++)
		dup = dup * num;
	return dup;
	
}

int armstrong(int num)
{
	static int sum;
	int rem;
	if(num)
	{
		rem = num%10;
		sum = sum + power(rem,realNumber);			
		armstrong(num/10);
		return sum;
	}

}

