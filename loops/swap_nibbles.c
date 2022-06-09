//This one is wrong..

#include<stdio.h>
void binary(int);
void main()
{
unsigned int num,i,j,m,n,pos=31;
printf("Enter Num :\t");
scanf("%d",&num);

binary(num);
printf("\n");

for(i=0,j=4;i<4;i++,j++)
{
	m=num>>pos&i;
	n=num>>pos&j;

	if(m!=n)
{		num = num^1<<i;
		num = num^1<<j;
}
}

binary(num);
printf("\n");


}
void binary(int num)
{
	int pos;
	for(pos=31;pos>=0;pos--)
	{	printf("%d",num>>pos&1);
		if(pos%8==0)
		printf(" ");
	}
	
}
