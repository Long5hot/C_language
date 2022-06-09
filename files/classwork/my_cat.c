#include<stdio.h>
void main(int argc,char **argv)
{
if(argc!=2)
{
printf("Usage:./a.out\n");
return;
}
FILE *fp=fopen(argv[1],"r");

if(fp==0)
{
printf("No file present\n");
return;
}

char ch;
while((ch=fgetc(fp))!=-1)
printf("%c",ch);
//FILE *fw;
//fw = fopen(argv[2],"w");
//printf("\n");

}
