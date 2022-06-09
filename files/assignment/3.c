#include<stdio.h>
void main(int argc, char ** argv)
{
	if(argc!=2) {
		printf("Usage: ./a.out fname\n");
		return;
	}

	FILE *fp = fopen(argv[1],"r");

	if(fp==0) {
		printf("No file found..\n");
		return;
	}
	FILE *temp = fopen("file_replica","w");
	char s[100],arr[100];
	int line;
	printf("Enter the line you want to replace.: \n");
	scanf("%d",&line);
	printf("Enter the new line..\n");
	scanf(" %[^\n]",s);
	int new_line = 0;
	while(fgets(arr,100,fp))	{
		new_line++;
		if(new_line != line)
			fputs(arr,temp);
		else {
			fputs(s,temp);
			fputc('\n',temp);	
		}
	}
	
}
