#include<stdio.h>
void main()
{
int num,dup,pal;
printf("Number ..:\t");
scanf("%d",&num);

for(dup=num,pal=0;dup;dup=dup/10)
	pal = pal*10 + dup%10;
if (pal == num)
printf("Palindrome\n");
else printf("Not pal...\n");
}
