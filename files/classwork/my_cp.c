#include<stdio.h>
void main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("Usage:./a.out\n");
		return;
	}
	FILE *fs,*fd;
	fs=fopen(argv[1],"r");

	if(fs==0)
	{
		printf("No file present\n");
		return;
	}
	char op;
	fd = fopen(argv[2],"r");
	if(fd)
	{
		printf("Destination file is present\nif you want to truncate press 'y':\n");
		scanf("%c",&op);
	}
	else op = 'y';
	if(op=='y'||op=='Y')
	{
		char ch;
		fd = fopen(argv[2],"w");

		while((ch=fgetc(fs))!=-1)
			fputc(ch,fd);
	}
	else return;

}
