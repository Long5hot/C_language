#include<stdio.h>
int prime(int,int);
void main()
{
	int r,k,count=0;
	printf("Enter the numnber,..\t");

	for(k=2;count<=100;k++)
	{ r =prime(2,k);
		if(r==0){ count++;
			printf("%d ",k);
		}}
}
int prime(int i,int num)
{
	if(num==i) return 0;
	else if(num%i==0) return 1;
	else return prime(i+1,num);

}


