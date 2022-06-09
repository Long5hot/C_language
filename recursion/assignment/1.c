#include<stdio.h>
int fact(int);
void main()
{
int num,r;

printf("Factorial of :   ");
scanf("%d",&num);

r = fact(num);
printf("%d\n",r);


}

int fact(int num)
{
	if(num>0)
		return num* fact(num-1);
	else return 1;

}
