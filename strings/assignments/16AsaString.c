#include<stdio.h>
#include<string.h>
void selection_sort(char *);
void main()
{
char a[20];

printf("Enter your string..:\n");
scanf("%[^\n]",a);

selection_sort(a);
printf("%s\n",a);

}
void selection_sort(char *a)
{
char temp;
int i,j;
for(i=0;a[i];i++)
	for(j=i+1;a[j];j++)
		if(a[i]>a[j])
		{
			temp = a[j];
			a[j] = a[i];
			a[i] = temp;
		}
	

printf("\n");


}
