#include<stdio.h>
void main()
{
char ele,i,j,ch;
char a[10];
int n;
ele = sizeof(a)/sizeof(a[0]);

printf("Enter 10 elements..\n");
printf("\n");
for(i=0;i<ele-1;i++)
	scanf(" %c",&a[i]);

printf("%d bytes\n",ele);
for(i=0;i<ele;i++)
	printf("%c ",a[i]);
printf("\n");

printf("Enter the character you want to add in array...\n");
scanf(" %c",&ch);
printf("Enter the position you want to enter bit...\n");
scanf("%d",&n);

for (i = ele-1; i>n; i--)
{
a[i] = a[i-1];
}

a[n] = ch;


printf("\n");
for(i=0;i<ele;i++)
	printf("%c ",a[i]);
printf("\n");

}
