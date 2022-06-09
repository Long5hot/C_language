#include<stdlib.h>
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
	char ch,*s;

	while((ch=fgetc(fp))!=-1)
	size++;

	rewind(fp);
	s = malloc(size);
	
	while(fgets(s,size,fp))
	line++;	

//	rewind(fp);
	
//	while(fscanf(fp,"%s",s))
//	word++;
	
	printf(" %d %d %d\n",line,word,size);


}
