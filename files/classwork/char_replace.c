#include<stdio.h>
#include<stdlib.h>
void main(int argc, char **argv)
{
	if(argc!=4)
	{
		printf("Usage:./a.out\n");
		printf("Usage:./a.out data m\n");
		return;
	}

	FILE *fp = fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("File not present..\n");
		return;
	}

	char ch;
	int size=0;
//FInding size of the file..
	while((ch = fgetc(fp))!=-1)
	size++;
	
	rewind(fp);
//Allocating DM

	char *p;
	p = malloc(size+1);
	
//Copying file data in array..
	int i=0;
	while((ch=fgetc(fp))!=-1)
	p[i++] = ch;

	p[i]='\0';

	rewind(fp);

//Replacing char in array..
for(i=0;p[i];i++)
{
if(p[i]==argv[2][0])
	p[i] = argv[3][0];
}

//Putting in files..
//for(i=0;p[i];i++)
//fputc(p[i],fp);

fputs(p,fp);


}
