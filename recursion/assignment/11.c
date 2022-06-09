#include<stdio.h>
void revBit(int*);
void main()
{
int num,pos;
printf("Enter the number.. :\n");
scanf("%d",&num);

for(pos=31;pos>=0;pos--)
	printf("%d",num>>pos&1);
revBit(&num);
printf("\n");
for(pos=31;pos>=0;pos--)
	printf("%d",num>>pos&1);
printf("\n%d\n",num);

}

void revBit(int *num)
{
static int i=0,j=31;
int m,n;
if(i<j)
{
m = *num>>i&1;
n = *num>>j&1;
if(m!=n)
{
	*num=*num^(1<<i);
	*num=*num^(1<<j);
}
i++;
j--;
revBit(num);
}
}
