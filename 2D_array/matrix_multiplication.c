#include<stdio.h>
void main()
{
int res[3][3],a[3][3],b[3][3];
int i,j,raw,col,sum;

printf("GIVE inputs for MATRIX A:\n");
for(raw=0;raw<3;raw++)
	for(col=0;col<3;col++)
		scanf("%d",&a[raw][col]);
printf("\nGIVE input for Matrix B:\n");
for(raw=0;raw<3;raw++)
	for(col=0;col<3;col++)
		scanf("%d",&b[raw][col]);

for(raw=0,i=0; raw<3;raw++)
{
	for(col=0;col<3;col++)
	{
		sum=0;
		for(j=0;j<3;j++)
		sum = sum + (a[raw][j])*(b[j][col]);
			
		res[raw][col] = sum;
	}
	
}


printf("\nResultant Matrix :\n");
for(raw=0;raw<3;raw++)
	{
		for(col=0;col<3;col++)
			printf("%d ",res[raw][col]);
		printf("\n");
	}
}
