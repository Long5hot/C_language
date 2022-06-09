#include<stdio.h>
#include<string.h>
struct student {
	int rollno;
	char name[10];
	float marks;
};

void main()
{
	FILE * fp = fopen("student","w");
	
	struct student s[5];
	int i,op,j;
	printf("Enter the details..:\n");

	for(i=0;i<5;i++)
		scanf("%d%s%f",&s[i].rollno,s[i].name,&s[i].marks);
	printf("\n");
	printf("Before sorting...\n");
	for(i=0;i<5;i++)
		printf("%3d %7s %3.2f\n",s[i].rollno,s[i].name,s[i].marks);

	printf("\n");

	printf("Operation you want to short with..:\n1) Rollno\n2) Name\n3) Marks\n");
	scanf("%d",&op);
	struct student temp;
	switch(op) {

		case 1 : 
				 for(i=0;i<5;i++) 
				{
					 for(j=i+1;j<5;j++) 
					 {
						 if(s[i].rollno>s[j].rollno) {
							 temp = s[j];
							 s[j] = s[i];
							 s[i] = temp;				
						 }
					 }
				 }
			 break;
		case 2 : 
				 for(i=0;i<5;i++) {
					 for(j=i+1;j<5;j++) {
						 if(strcmp(s[i].name,s[j].name)>0) {
							 temp = s[j];
							 s[j] = s[i];
							 s[i] = temp;				
						 }					
					 }
				 }
			 	break;
			
		case 3 : 
				 for(i=0;i<5;i++) {
					 for(j=i+1;j<5;j++) {
						 if(s[i].marks>s[j].marks) {
							 temp = s[j];
							 s[j] = s[i];
							 s[i] = temp;				
						 }
					 }
				 }
				 break;
	}


	/*
	printf("\nAfter sorting...\n");
	for(i=0;i<5;i++)
		printf("%3d %7s %3.2f\n",s[i].rollno,s[i].name,s[i].marks);
	*/
	    
	for(i=0;i<5;i++)  {
		fprintf(fp,"%3d %7s %3.2f\n",s[i].rollno,s[i].name,s[i].marks);
	
	}	







}
