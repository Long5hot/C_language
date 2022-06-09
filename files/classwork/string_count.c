#include<stdio.h>
#include<string.h>

void main(int argc,char **argv)
{

if(argc!=3)
{
	printf("Usage:./a.out fname string\n");
	return;
}

FILE * fp = fopen(argv[1],"r");

if(fp==0)
{
	printf("File not present\n");
	return;
}
int c=0;
char s[20];
while(fscanf(fp,"%s",s)!=-1)
{
	if(strcmp(s,argv[2])==0)
			c++;
}

printf("c = %d\n",c);















}
