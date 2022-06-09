#include<stdio.h>
void main()
{
int num,pos;
printf("Num :\t");
scanf("%d",&num);

for(pos=31;pos>=0;pos--)
{	printf("%d",num>>pos&1);
		if (pos%8==0)
		printf(" ");
}
printf("\n");

}
