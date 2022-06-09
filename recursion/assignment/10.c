#include<stdio.h>

int checkLarge(int *,int);
int large;
void main()
{
int a[8] = {3,4,2,1,2,4,5,6};
int ele,p;
ele = sizeof(a)/sizeof(a[0]);
large = a[0];
p = checkLarge(a,ele);

printf("%d \n",large);


}

int checkLarge(int * a,int ele)
{
	static int i =1;
	if(i<ele)
	{
		if(a[i]>large)
		{
			large = a[i];
		}
	++i;
	checkLarge(a,ele);
	}
	return large;
}
