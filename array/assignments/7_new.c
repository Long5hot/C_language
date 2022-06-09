#include<stdio.h>
void main()
{
char a[10] = {},ch;
int ele,i,j,pos;

ele = sizeof(a)/sizeof(a[0]);

for(i=0;i<ele-2;i++)
	scanf(" %c",&a[i]);

for(i=0;i<ele;i++)
	printf("%c ",a[i]);

printf("\n");
printf("Position..:\t");
scanf("%d",&pos);

for(i=ele-1;i>=pos;i--)
{
	a[i+1] = a[i];
}

printf("Enter the character..:  ");
scanf(" %c",&ch);

printf("\n");

a[pos] = ch;

for(i=0;i<ele;i++)
	printf("%c ",a[i]);

}
