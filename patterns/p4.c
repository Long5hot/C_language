//     *
//    * *
//   * * *
//  * * * *
// * * * * *
//  * * * *
//   * * *
//    * * 
//     *
#include<stdio.h>
void main()
{
int i,j,k,l,m;
for(i=0;i<5;i++)
{
for(j=0;j<4-i;j++)
printf(" ");
for(k=0;k<=i;k++)
printf("* ");
printf("\n");
}

for(i=0;i<4;i++)
{
for(l=0;l<=i;l++)
printf(" ");
for(m=0;m<4-i;m++)
printf("* ");

printf("\n");
}
printf("\n");

}
