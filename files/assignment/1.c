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
	int op;
	AGAIN:
	printf("Operation ypu want to perform :\n1)All lower\n2)All Upper\n3)Toggle\n");
	scanf("%d",&op);

	char ch;
	if(op==1)
		while((ch = fgetc(fp))!=-1) {
			if(ch>=65&&ch<=90) {
				ch = ch + 32;
				fseek(fp,-1,SEEK_CUR);
				fputc(ch,fp);
			}
		}
	else if(op==2)
		while((ch = fgetc(fp))!=EOF) {
			if(ch>=97&&ch<=122) {
				ch = ch-32;
				fseek(fp,-1,SEEK_CUR);
				fputc(ch,fp);		
			}
		}
	else if(op==3) 
		while((ch=fgetc(fp))!=EOF)   {
			if((ch>=65&&ch<=90) ||(ch>=97&&ch<=122)) {
				ch = ch^32;
				fseek(fp,-1,SEEK_CUR);
				fputc(ch,fp);	
			}	
		}
	else {
		printf("Wrong choice..\n");
		printf("PRESS Y for continue or E for exit :\t");
		char choice;
		scanf(" %c",&choice);
		if(choice=='y'|| choice=='Y')  goto AGAIN;
		else exit(0);
	}




}
