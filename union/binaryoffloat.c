#include<stdio.h>
union U
{
int num;
float f;
};
void main()
{
union U u1;
u1.f = 23.5;
printf("%d\n",u1.num);

for(int pos=31;pos>=0;pos--)
printf("%d",u1.num>>pos&1);

printf("\n");


}
