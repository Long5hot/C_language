#include<stdlib.h>
#include<stdio.h>
void main(int argc, char ** argv)
{
	if(argc!=4)
	{
		printf("Usage: ./a.out fname\n");
		return;
	}

	FILE *file_1 = fopen(argv[1],"r");
	FILE *file_2 = fopen(argv[2],"r");
	FILE *result = fopen(argv[3],"w");
	if(file_1==0||file_2==0)
	{
		printf("Error finding files...\n");
		return;
	} 
	int keep_reading = 1;
	
	char str1[100],str2[100];
	
	int var_1=0,var_2=0;	

	while(keep_reading)   {
		if(fgets(str1,100,file_1))
			fputs(str1,result);
		else 
			var_1=1;
		if(fgets(str2,100,file_2))
			fputs(str2,result);
		else 
			var_2=1;
		
		if(var_1&&var_2)
			keep_reading = 0;
	}




}
