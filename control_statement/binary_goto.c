#include<stdio.h>
void main()
{
int num,pos;
printf("Number :\t");
scanf("%d",&num);
pos = sizeof(num)*8-1;
L: 
{	printf("%d",num>>pos&1);
	if (pos%8==0)
	printf(" ");
	pos--;
}
if(pos>=0)
{
	goto L;
}	
printf("\n");
}
