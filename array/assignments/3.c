#include<stdio.h>
void main()
{
int a[10],n,j,i,ele_a,len,p[10];

ele_a = sizeof(a)/sizeof(a[0]);


printf("Enter 10 elements..\n");

for(i=0;i<ele_a;i++)
	scanf("%d",&a[i]);

for(i=0,j=0,len=0;i<ele_a;i++)
{
	for(n=2;n<a[i];n++)
		if(a[i]%n==0)
		  break;
	if(n==a[i])
	{
	 p[j]=a[i];
	 j++;
	len++;
	}
}
printf("your elements..\n");
for(i=0;i<ele_a;i++)
	printf("%d  ",a[i]);

printf("Prime elements..\n");
for(j=0;j<len;j++)
	printf("%d  ",p[j]);
printf("\n");
}
