#include<stdio.h>
void main()
{
int a[10],n,j,i,big,secondbig,small,ss,ele,p[10];

ele = sizeof(a)/sizeof(a[0]);
printf("Enter 10 elements..\n");
for(i=0;i<ele;i++)
	scanf("%d",&a[i]);

for(i=0;i<ele;i++)
	printf("%d ",a[i]);
printf("\n");

if(a[0]>a[1]) {
	big = a[0];
	secondbig = a[1];
}
else {
	big = a[1];
	secondbig = a[0];
}

for(i=2;i<ele;i++)
{
	if(a[i]>big)
	{
	secondbig = big;
	big = a[i];
	}

	else if(a[i] > secondbig && a[i]!=big)
	secondbig = a[i];
}


printf("big = %d, sb = %d\n",big,secondbig);


}



