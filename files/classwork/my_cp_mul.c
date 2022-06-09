#include<stdio.h>
void main(int argc,char **argv)
{
	if(argc<3)
	{
		printf("Usage:./a.out sf d1 d2 d3\n");
		return;
	}
	FILE *fs,*fd;
	fs=fopen(argv[1],"r");

	if(fs==0)
	{
		printf("No file present\n");
		return;
	}
	int i,op;
	char ch;
	for(i=2;i<argc;i++)
	{
		fd = fopen(argv[i],"r");
		if(fd == 0)
		{
			fd = fopen(argv[i],"w");
			while((ch=fgetc(fs))!=-1)
					fputc(ch,fd);
		}
		else 
		{
			printf("Dest file present..\n");
			printf("Enter for 1) Truncate 2)leave it\n");
			scanf("%d",&op);
			if(op==1)
			{
				fd = fopen(argv[i],"w");
				while((ch=fgetc(fs))!=-1)
					fputc(ch,fd);
			}
			else continue;

		}
	rewind(fs);
	}						
}
