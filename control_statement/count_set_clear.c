#include<stdio.h>
void main()
{
int num,pos,s,c;
printf("Number..\n");
scanf("%d",&num);
for(pos=0, s=0, c=0;pos<32;pos++)
{	if( num& 1<<pos)
		s++;
	else c++;
}

printf("set = %d, clear =%d\n",s,c);

}
