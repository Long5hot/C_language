#include<stdio.h>
void power_of_2(int);
void main()
{
int num;
printf("Enter the number you want to check...\t");
scanf("%d",&num);

power_of_2(num);

}

void power_of_2(int num)
{

num&(num-1) ? printf("Not power of two...\n") : printf("Yes power of two..\n");

}



