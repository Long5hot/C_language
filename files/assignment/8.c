#include<string.h>
#include<stdio.h>
void main(int argc, char **argv)
{
	if(argc!=4)
	{
		printf("Usage: ./a.out filename str1 str2");
		return;
	}

	FILE *fp = fopen(argv[1],"r");

	if(fp==0)
	{
		printf("File not present\n");
		return;
	}

	char *q,s[100],str_1[20],str_2[20];
	int l,i,j,k,diff;
	FILE * fd  = fopen("des","w");

	strcpy(str_1,argv[2]);
	strcpy(str_2,argv[3]);
	while(fgets(s,90,fp))
	{
		diff = strlen(argv[3])-strlen(argv[2]);
		if(q = strstr(s,str_1))
		{
			l = q-s;
			if(diff>=0)
			for(i=0;i<diff;i++)
				for(j = strlen(s);j>l;j--) 
					s[j+1] = s[j];
			else {
				diff = -diff;
				for(i=0;i<diff;i++)
					for(j=l;s[j];j++)
						s[j] = s[j+1];
				
			}
			for(k=0;k<strlen(str_2);k++)
				s[l++] = str_2[k];
		}
		fputs(s,fd);
	}



}
