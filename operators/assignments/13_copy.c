#include<stdio.h>
void binary(int , int);

void main()
{
	unsigned int num,left,right,op;
	int pos,po,len,answer;
	printf("Enter the number...\n");
	scanf("%d",&num);

	binary(num,pos);

//	printf("Number of bits you want to delete:\t");
//	scanf("%d",&len);
	answer = 1;
	op = num;
	while(answer)
{	
	printf("Enter the position you want to delete:\t");
	scanf("%d",&po); 
	left = op>>po+1;
	left = left<<po;
	printf("Left :\t");
	binary(left,pos);

	right = op<<31-po;
	right = right>>31-po;
	printf("Right :\t");
	binary(right,pos);
	printf("\n");
	op = left | right;
	printf("Output :\t");
	binary(op,pos);
        printf("\n\n");
	printf("Press 1 for again otherwise 0:\t");
	scanf("%d",&answer);
	
}
}


void binary(int n, int pos)
{
	printf("Binary of %d: \t",n);
	for(pos=31;pos>=0;pos--)
		printf("%d",n>>pos&1);
	printf("\n");
}
