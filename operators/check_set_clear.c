#include<stdio.h>
void main()
{
int num,pos,r;
printf("Enter the number you want to check..\n");
scanf("%d",&num);
printf("Enter the position you want to check..\n");
scanf("%d",&pos);

num&1<<pos ? printf("SET...\n") : printf("Clear..\n");

}



