#include<stdio.h>
void main()
{
	int i,j,k;
	char a=96;
	int digit =0;
	int raw;
	scanf("%d",&raw);
	for(i=0;i<raw;i++)
	{
		for(j=0;j<i;j++)
			printf(" ");
		for(k=0;k<=raw-i-1;k++)
			if(k==0||k==raw-1-i)
				printf("%c ",++a);
			else printf("%d ",digit++);
		printf("\n");
	}


}
