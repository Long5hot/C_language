#include<stdio.h>
int * abc(void);
static int i = 10;
void main()
{

	static int i = 20;
	int *p ;
	printf("i = %d\n",i);
	p = abc();
	printf("*p = %d\n",*p);
}

int * abc(){
	return &i;
}
