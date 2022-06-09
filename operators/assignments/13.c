#include<stdio.h>
void binary(int , int);

void main()
{
	unsigned int num,left,right,op;
	int pos,po,len;
	printf("Enter the number...\n");
	scanf("%d",&num);

	binary(num,pos);

	printf("Enter the position you want to delete from :\t");
	scanf("%d",&po); 	//Here po is for position you want to delete from
	printf("Number of bits you want to delete:\t");
	scanf("%d",&len);

	left = num>>(po + len);
	left = left<<po;
	printf("Left portio: \t");
	binary(left,pos);

	right = num<<31-po;
	right = right>>31-po;
	printf("Right portion: \t");
	binary(right,pos);

	op = left | right;
	printf("Output :\t");
	binary(op,pos);


}


void binary(int n, int pos)
{
	printf("Binary of %d: \t",n);
	for(pos=31;pos>=0;pos--)
		printf("%d",n>>pos&1);
	printf("\n");
}
