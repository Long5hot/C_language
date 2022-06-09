#include<stdio.h>
void main()
{
int i,j,k;
char str[50];
printf("Enter your string...:\n");
scanf("%[^\n]",str);



for(i=0;str[i];i++)
{
	if(str[0]==' ') 
		for(k=0;str[k];k++)
			str[k]=str[k+1];
	if(str[i]==' ' && str[i+1]==' ')
	{
		for(j=i;str[j];j++)
		str[j]=str[j+1];

	i--;	
	}


}
printf("%s\n\n",str);

}
