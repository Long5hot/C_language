#include<stdio.h>
void reverse(int *,int);
static int ele;
void main()
{
int i, a[5] = {1,2,3,4,5};

ele = sizeof(a)/sizeof(a[0]);
reverse(a,ele);

for(i=0;i<ele;i++)
	printf("%d ",a[i]);

}

void reverse(int *a,int ele)
{
	int temp;
	static int i=0;
	if(i<ele)
	{
		temp =a[ele-1];
		a[ele-1] = a[i];
		a[i] = temp;	
		i++;
		reverse(a,ele-1);
	}
	
}
