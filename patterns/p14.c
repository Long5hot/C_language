//*********
//**** ****
//***   ***
//**     **
//*       *



#include<stdio.h>
void main()
{
int i,j,k,l,m,raw;
char ch;
printf("Enter the number of raw you want to print....");
scanf("%d",&raw);


for(i=0;i<raw;i++)
	{

	for(j=0,ch=97;j<raw-i;j++,ch++)
	printf("%c",ch);
	for(k=0;k<i;k++)
	printf(" ");

	ch--;

	for(l=0;l<i;l++)
	printf(" ");	
	for(m=0;m<raw-i;m++,ch--)
	printf("%c",ch);
	
	printf("\n");

	}





}
