#include<stdio.h>
void display(int);

void main()
{
int num;
scanf("%d",&num);

display(num);


}

void display(int num)
{
int rem;
	if(num)
	{
	rem = num%10;
	switch(rem)
		{
			case 0 : printf("zero "); break;
			case 1 : printf("One "); break;	
			case 2 : printf("Two "); break;
			case 3 : printf("Three "); break;
			case 4 : printf("Four "); break;
			case 5 : printf("Five "); break;
			case 6 : printf("Six "); break;
			case 7 : printf("Seven "); break;
			case 8 : printf("Eight "); break;
			case 9 : printf("Nine "); break;
		}
	display(num/10);
	}

}
