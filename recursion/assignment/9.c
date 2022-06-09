#include<stdio.h>
int perfect(int);
int realNumber;
void main()
{

printf("Number : ");
int num,check;
scanf("%d",&num);
realNumber = num;
check = perfect(num);

if (realNumber == check) printf("Yes  \n");
else printf("Nooooo\n");

}

int perfect(int num)
{
	static int sum=0;
	if(num)
	{
		if(realNumber%num==0 && realNumber!=num)
			sum = sum+num;
	perfect(num-1);
	return sum;
	}


}
