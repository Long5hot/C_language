#include<stdio.h>
void main()
{
int c,ele,i,j,k,flag;
char a[10];
int n;
ele = sizeof(a)/sizeof(a[0]);

printf("Enter 10 elements..\n");
printf("\n");
for(i=0;i<ele;i++)
	scanf(" %c",&a[i]);

for(i=0;i<ele;i++)
	printf("%c ",a[i]);
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
	if(flag ==0 || i==0)
	{
	for(k=i+1,c=1; (k<ele) ;k++)
	if (a[i]==a[k])  c++;  
	printf("%c is present %d times.\n",a[i],c);
	}




}
}
