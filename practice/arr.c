#include<stdio.h>

void main()
{
	char *a;
	int b[5] = {1,2,3,4,5};

	//for(int i=0;i<5;i++)
	//	scanf("%d",b+i);
	a = b;
	for(int i=0;i<5;i++,a = a+4)
		printf("%d ",*a);
	printf("Executed\n");

}
