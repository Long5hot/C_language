#include<stdio.h>
void main()
{
	int count,ele,i,j,k,flag,d1=0,d2=0;
	int a[13],des1[10]={},des2[10] ={} ;
	int n,ele_des1,ele_des2;
	ele = sizeof(a)/sizeof(a[0]);

	printf("Enter 10 elements..\n");
	printf("\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

	for(i = 0,flag = 0; i<ele; i++)
	{ 
		count = 1;
		for(k=i+1; k<ele ;k++)
			if (a[i]==a[k])  count++;  
			
		if(count == 1) 
		{
			des1[d1] = a[i];
			d1++;
		}
		else 
		{
			des2[d2] = a[i];
			d2++;
		}
	}
	printf("\n");
	ele_des1 = sizeof(des1)/sizeof(des1[0]);
	ele_des2 = sizeof(des2)/sizeof(des2[0]);
	
	for(i=0;i<ele_des1;i++)
		printf("%d ",des1[i]);
	printf("   ");
	for(i=0;i<ele_des2;i++)
		printf("%d ", des2[i]);

printf("\n");
}
