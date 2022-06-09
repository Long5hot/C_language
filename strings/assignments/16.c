#include<stdio.h>
void main()
{
int a[5],ele,i,j,temp;
ele = sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
	scanf("%d",&a[i]);

for(i=0;i<ele;i++)
	printf("%d ",a[i]);


for(i=0;i<ele;i++)
	for(j=0;j<ele-i;j++)
	{
		if(a[j]>a[j+1])
		{
		temp = a[j];
		a[j] = a[j+1];
		a[j+1] = temp;
		}
	}

printf("\n");

for(i=0;i<ele;i++)
	printf("%d ",a[i]);

}
