#include<stdio.h>
void main()
{
int ele,i,a[10] = {3,6,4,8,9,2,34,23,12,56},big,small,secondbig,secondsmall;

if(a[0]>a[1])
{
	big = a[0];
	secondbig = a[1];
}
else
{
	big = a[1];
	secondbig = a[0];
}

ele = sizeof(a)/sizeof(a[0]);

for(i = 2; i<ele; i++)
{
	if(a[i]>big)
	{
	secondbig = big;
	big = a[i];
	}

}

printf("Big = %d, Secondbig = %d\n",big,secondbig);
}
