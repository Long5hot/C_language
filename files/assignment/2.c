#include<stdio.h>
#include<stdlib.h>
void main(int argc, char **argv)
{
	if(argc!=2)  {
		printf("Usage:./a.out fname\n");
		return;
	}

	FILE *fp = fopen(argv[1],"r+");

	if(fp==0)  {
		printf("File not found..\n");
		return;
	}

	int line,dummy_line=0, max_len=0,len=0;
	char ch;

	while((ch = fgetc(fp))!=EOF) {
		printf("%c",ch);
	}

	printf("\nWhich line you want to delete..:  ");
	scanf("%d",&line);

	rewind(fp);
	while((ch = fgetc(fp))!=-1) {
		len++;
		if(ch == '\n')	{
			if(len>max_len)
				max_len = len;
			len = 0;
		}
	}

	char * s;
	s = malloc(max_len+1);
	FILE * fd = fopen("file_replica","w");
	rewind(fp);

	while(fgets(s,max_len+1,fp)) {
		++dummy_line;
		if(dummy_line!=line) 
			fputs(s,fd);
		else 
			continue;
	}
	fclose(fp);
	fclose(fd);
	remove(argv[1]);
	rename("file_replica",argv[1]);



}
