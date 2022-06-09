#include<stdio.h>
void main(int argc,char **argv)
{
FILE *fp;

//char s[20];

if(argc!=2) 
{
	printf("Usage:./a.out filename\n");
	return;
}

fp = fopen(argv[1],"r+");

if(fp==0) printf("Not present\n");
else printf("Present\n");


}
