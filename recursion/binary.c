#include<stdio.h>
void binary(num);
void main()
{
int num;
printf("Enter the binary number you want to find :\t");
scanf("%d",&num);

binary(num);
printf("\n");
}

void binary(int num)
{
	static int pos =31;
	if(pos>=0)
	{	printf("%d",num>>pos&1);
		pos--;
		binary(num);
	}
	else pos = 31;
}
