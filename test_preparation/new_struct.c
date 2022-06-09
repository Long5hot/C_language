#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct student {
	int rollno;
	char name[10];
	float marks;
};
void swap(struct student *,struct student *);
void main()
{
	FILE * fp = fopen("student","w");
	int n;	
	printf("Enter the students count..:  ");
	scanf("%d",&n);
	struct student *s[n];
	int i,op,j;
	
//	s = malloc(sizeof(struct student *)*st);
	for(i=0;i<n;i++)
		s[i] = malloc(sizeof(struct student));
	printf("Enter the details..:\n");

	for(i=0;i<n;i++)
		scanf("%d%s%f",&s[i]->rollno,s[i]->name,&s[i]->marks);
	printf("\n");
	printf("Before sorting...\n");
	for(i=0;i<n;i++)
		printf("%3d %7s %3.2f\n",s[i]->rollno,s[i]->name,s[i]->marks);

	printf("\n");

	printf("Operation you want to short with..:\n1) Rollno\n2) Name\n3) Marks\n");
	scanf("%d",&op);
	struct student temp;
	switch(op) {

		case 1 : 
				 for(i=0;i<n;i++) 
				{
					 for(j=i+1;j<n;j++) 
					 {
						 if(s[i]->rollno>s[j]->rollno) {	
							swap(s[i],s[j]); 
						 }
					 }
				 }
			 break;
		case 2 : 
				 for(i=0;i<n;i++) {
					 for(j=i+1;j<n;j++) {
						 if(strcmp(s[i]->name,s[j]->name)>0) {
							swap(s[i],s[j]);
						 }					
					 }
				 }
			 	break;
			
		case 3 : 
				 for(i=0;i<n;i++) {
					 for(j=i+1;j<n;j++) {
						 if(s[i]->marks>s[j]->marks) {
							swap(s[i],s[j]);
						 }
					 }
				 }
				 break;

	}
	    

	for(i=0;i<n;i++)
		fprintf(fp,"%3d %7s %3.2f\n",s[i]->rollno,s[i]->name,s[i]->marks);		
}

void swap(struct student * a, struct student *b)
{
struct student temp;
							 temp.rollno = a->rollno;
							 a->rollno = b->rollno;
							 b->rollno = temp.rollno;
								
							 strcpy(temp.name,a->name);
							 strcpy(a->name,b->name);
							 strcpy(b->name,temp.name);

							 temp.marks = a->marks;
							 a->marks = b->marks;
							 b->marks = temp.marks;		


}










