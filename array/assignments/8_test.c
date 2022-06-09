#include<stdio.h>
void main()
{
char a[10] = {'A','C','B','D','A','B','E','D','B','C'};
int i,ele,j,k,flag;

ele = sizeof(a)/sizeof(a[0]);
/*
for(i=0;i<ele;i++)
{	
	if(i!=0)
	for(j = i-1 ;j>=0;j--)
		if(a[i]==a[j])
}*/

for(i=0;i<ele;i++)
	for(j=i+1; j<ele; j++)
		if(a[i]==a[j])
		{
			for(k=j;k<ele;k++)
			{
				a[k] = a[k+1];
			}
		a[k] = '\0';
		}


for(i=0;i<ele;i++)
	printf("%c ",a[i]);
printf("\n");
}
