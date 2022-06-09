#include<stdio.h>
void main()
{
int i,j,k,l,m;

for(i=0; i<5;i++)
{
	for(j=5-i; j>0; j--)
	printf(" ");
	for(k=1;k<=2*i+1 ;k++)
	printf("*");
printf("\n");
}
//printf("k = %d\n",k);
for(i=4; i>=0;i--)
{
	for(l=0; l<=5-i;l++)
	printf(" ");
	for(m=2*i-1; m>0 ;m--)
	printf("*");
printf("\n");
}

}
