#include<stdio.h>
void main()
{
int a[10],ele,i,j,n;

ele = sizeof(a)/sizeof(a[0]);

printf("Enter 10 elements..\n");
printf("\n");
for(i=0;i<ele;i++)
	scanf("%d",&a[i]);

for(i=0;i<ele;i++)
	printf("%d ",a[i]);
printf("\n");

printf("Enter the position you want to delete..\t");
scanf("%d",&n);

for(; n<=ele;n++)
{
	a[n-1] = a[n];
}


printf("\n");
for(i=0;i<ele;i++)
	printf("%d ",a[i]);
printf("\n");



}
