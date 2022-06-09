#include<stdio.h>
void main()
{
int a[5],ele,i,j,temp;

ele = sizeof(a)/sizeof(a[0]);

printf("Enter 10 elements..\n");
for(i=0;i<ele;i++)
	scanf("%d",&a[i]);

for(i=0;i<ele;i++)
	printf("%d ",a[i]);
printf("\n");


for(i=0; i<(ele/2) ;i++)
{
	temp = a[i];
	a[i] = a[ele-1-i];
	a[ele-1-i] = temp;
} 


for(i=0;i<ele;i++)
	printf("%d ",a[i]);
printf("\n");

}
