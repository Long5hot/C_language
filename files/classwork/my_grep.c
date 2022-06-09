#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("Usage:./a.out string fname\n");
		return;
	}
	char *s,ch;
	int i=0;
	FILE *fp = fopen(argv[2],"r");

	if(fp==0) 
	{
		printf("File not present\n");
		return;
	}
	//Second solution
	/*  Allocating the dynamic memory of total size of the file for every line or an array for one line

	    while((ch=fgetc(fp))!=-1)
	    i++;

	    rewind(fp);

	    s = malloc(i+1);


	    while(fgets(s,i,fp))
	    {
	    if(strstr(s,argv[1]))
	    printf("%s",s);
	    }
	 */

	//Third soln
	//Findout the biggest line lentgh
	int small=0,big=0;
	while((ch=fgetc(fp))!=-1)
	{
		small++;
		if(ch=='\n')
		{
			if(small>big)
			{
				big = small;
				small=0;

			}
		}
	} 
	rewind(fp);
	s = malloc(big+1);
	while(fgets(s,big+1,fp))
	{
    	    if(strstr(s,argv[1]))
       		 printf("%s",s);
	}

}

