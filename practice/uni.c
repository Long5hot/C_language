#include<stdio.h>
union U
{
int i;
float f;
};
void main()
{
union U hi;
hi.f = 23.5;
int pos=31;

for(pos = 31;pos>=0; pos--)
	{
		printf("%d",hi.i>>pos&1);
		if(pos%8==0)
			printf(" ");
	}
	printf("\n");

}
