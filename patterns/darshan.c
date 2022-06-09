#include<stdio.h>
void main()
{
	int i,j,k,a,b;
	for(i=-2;i<=2;i++)
	{
		for(j=-2;j<=2;j++)
		{
			a=j;b=i;
			if(j<0)a=-a;
			if(i<0)b=-b;
			k=(a>b?a:b);
			printf("%d ",k+1);
		}
		printf("\n");
	}



}
