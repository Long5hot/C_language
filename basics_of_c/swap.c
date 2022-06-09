#include<stdio.h>
void main()
{
int a,b,t;
printf("Enter a : \n");
scanf("%d",&a);
printf("Enter b : \n");
scanf("%d",&b);

//METHOD 1
//a = a+b;
//b = a-b;
//a = a-b;

//METHOD 2
//a = a*b;
//b = a/b;
//a = a/b;

//METHOD 3
//b = a+b-(a=b);

//METHOD 4
//b = a*b / (a = b);

//METHOD 5
//a = a^b;
//b = a^b;
//a = a^b;

//METHOD 6
//b = a^b ^ (a =b);

printf("After swap a = %d, b = %d\n",a,b);



}
