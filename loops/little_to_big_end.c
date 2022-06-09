#include<stdio.h>
void main()
{
unsigned int num = 0x11223344,n1,n2,n3,n4,big_num;

n1 = num& 0x000000ff;
n1 = n1<<24;

n2 = num & 0x0000ff00;
n2 = n2<<8;

n3 = num & 0x00ff0000;
n3 = n3>>8;

n4 = num & 0xff000000;
n4 = n4>>24;

big_num = n1|n2|n3|n4;
printf("%x\n",big_num);


}
