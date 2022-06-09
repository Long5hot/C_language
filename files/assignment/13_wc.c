#include<stdio.h>
void main(int argc, char **argv)
{
	if(argc!=2)
	{
		printf("Usage:./a.out fname\n");
		return;
	}

	FILE * fp = fopen(argv[1],"r");

	if(fp==0)
	{
		printf("No file\n");
		return;
	}


	int word=0,line=0,size=0;
	char ch;

L:
	ch = fgetc(fp);
	if(ch==' ')
	{
		size++;
		goto L;	
	}
	if(ch=='\n')
	{
		size++;
		line++;
		goto L;
	}


	while((ch=fgetc(fp))!=-1)
	{
		size++;
		if(ch == ' ')
		{	
			ch = fgetc(fp);
			size++;
			if(ch!=' ')
			{	
				word++;	
			}
		}
		if(ch=='\n')
		{
			line++;
			word++;
		}
	}


	printf(" %d %d %d\n",line,word,size);


}
