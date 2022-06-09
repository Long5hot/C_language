#include<stdio.h>
void main()
{
int num,rev,sum,rem,dup;
printf("Enter num :\t");
scanf("%d",&num);

for(dup=num, rev=0; dup; dup=dup/10)
{
	rev = rev*10 + dup%10; 
}
printf("Reverse : %d\n",rev);

}
