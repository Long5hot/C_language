#include<stdio.h>
void main()
{
int pos,ele,a[8] = {14,50,73,9,24,3,92,-3},i;

ele = sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
	printf("%d ",a[i]);

printf("\n");
scanf("%d",&pos);

for(i = pos-1 ;i<ele;i++)
	a[i] = a[i+1];
a[ele-1] = 0; 
 
for(i=0;i<ele;i++)
	printf("%d ",a[i]);


}
