//* * * * *
// * * * *
//  * * *
//   * * 
//    *
//   * *
//  * * *
// * * * *
//* * * * *
#include<stdio.h>
void main()
{
int i,j,k,l,m,n;
for(i=0;i<5;i++)
{
	for(j=0; j<i;j++)
		printf(" ");
	for(k=0;k<5-i;k++)
		printf("* ");
	printf("\n");
}
for(i=0;i<4;i++)
{
	for(j=0;j<3-i;j++)
		printf(" ");
	for(k=0;k<i+2;k++)
		printf("* ");
	printf("\n");



}

}
