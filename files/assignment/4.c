#include<stdlib.h>
#include<stdio.h>
void main(int argc, char ** argv)
{
	if(argc!=2)
	{
		printf("Usage: ./a.out fname\n");
		return;
	}

	FILE *fp = fopen(argv[1],"r+");

	if(fp==0)
	{
		printf("File not found...\n");
		return;
	}
	char ch;
	ch = fgetc(fp);
	if(ch>=97&&ch<=122) {
		ch = ch-32;
		fseek(fp,-1,SEEK_CUR);
		fputc(ch,fp);
	}
	while((ch = fgetc(fp))!=EOF) {
		if(ch=='\n') {
			ch = fgetc(fp);
			if(ch>=97&&ch<=122) {
				ch = ch-32;
				fseek(fp,-1,SEEK_CUR);
				fputc(ch,fp);
			}
		}
	}
	



}
