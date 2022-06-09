#include<stdio.h>
void main()
{
	FILE *fp;

	fp = fopen("data","r");

	if(fp==0)	printf("Not present\n");
	else	printf("Present..\n");

}
