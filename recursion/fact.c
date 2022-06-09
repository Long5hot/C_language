#include<stdio.h>
int fact(int);
void main()
{
long int num,p;

printf("Enter the number you want to find factorial..:\t");
scanf("%lu",&num);

p = fact(num);

printf("Factorial of given number is %lu\n",p);

}
int fact(int num)
{
	if(num)
	{
	return num*fact(num-1);
	}
	else return 1;
}
