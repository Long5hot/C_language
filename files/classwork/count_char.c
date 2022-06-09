#include<stdio.h>
void main(int argc, char **argv)
{
	if(argc!=3)
	{
		printf("Usage:./a.out\n");
		printf("Usage:./a.out data m\n");
		return;
	}

	FILE *fp = fopen(argv[1],"r");
	if(fp==0)
	{
		printf("File not present..\n");
		return;
	}

	char ch;
	int count=0;

	while((ch = fgetc(fp))!=-1)
		if(ch==argv[2][0])
			count++;

	printf("%c %dtimes\n",argv[2][0],count);
}
