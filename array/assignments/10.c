#include<stdio.h>
void main()
{
	int count,ele,i,j,k,flag;
	int a[10];
	int n;
	ele = sizeof(a)/sizeof(a[0]);

	printf("Enter 10 elements..\n");
	printf("\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

	for(i = 0; i<ele; i++)
	{       if(i!=0)
		for(j = i-1,flag=0; j>=0; j--)
		{
			if(a[i]==a[j])
			{
				flag = 1;
				break;
			}
		}
		if(flag ==0)
		{
			for(k=i+1,count=1; k<ele ;k++)
				if (a[i]==a[k])  count++;  
			
		if(count == 1) printf("%d ",a[i]);
		}




	}
}
