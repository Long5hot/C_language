#include<stdio.h>
void main()
{
int i,ele,large,small, a[5] = {3,7,5,8,4};

ele = sizeof(a)/sizeof(a[0]);

large = a[0];
small = a[0];

for(i=1;i<ele;i++)
{
	if(a[i]>large)
		large = a[i];
	if(a[i]<small)
		small = a[i];
}

printf("Large = %d, Small = %d\n",large,small);

}
