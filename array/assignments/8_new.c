#include<stdio.h>
void main()
{
	int c,m,ele,i,j,k,flag,ele_b;
	char a[10],b[10];
	int n;
	ele = sizeof(a)/sizeof(a[0]);

	printf("Enter 10 elements..\n");
	printf("\n");
	for(i=0;i<ele;i++)
		scanf(" %c",&a[i]);

	for(i=0;i<ele;i++)
		printf("%c ",a[i]);
	printf("\n");

	for(i=0;i<ele;i++)
	{
		for(j=ele-1;j>=0;j++)
		{
			if(a[i]==a[j])
			a[j-1]=a[j];
		}

	}







}
