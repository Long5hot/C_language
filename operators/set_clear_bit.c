#include<stdio.h>
void main()
{
	int num,pos;
	printf("Enter the number ...\t");
	scanf("%d",&num);
	printf("Enter the bit posotion...:\t");
	scanf("%d",&pos);
	
	//set condition : 
	//num = num|1<<pos;
	//Clear Condition :
	//num = num & ~(1<<pos);
	//This condition compliments the bit...
	num = num ^ (1<<pos);
	printf("After the operatrion the number will be...%d\n",num);

}
