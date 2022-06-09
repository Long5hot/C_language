#include<string.h>
#include<stdio.h>
void main()
{
char real[100],word[20],replace[20];
int l_w,l_r,diff,i;


printf("Enter the string...\n");
scanf("%[^\n]",real);
printf("Enter the world that you want to replace..\n");
scanf(" %s",word);
printf("Enter new world..:\n");
scanf(" %s",replace);


l_w = strlen(word);
printf("l_w = %d\n",l_w);
l_r = strlen(replace);
printf("l_r = %d\n",l_r);
diff = l_r - l_w;

printf("%d\n",diff);

if(diff>0)
{
	for(;diff>0;diff--){
		for(i=strlen(real);i>=0;i--)
			real[i+1] = real[i];	
}
	for(i=0;i<strlen(replace);i++)
		real[i] = replace[i];
}

else
{
	diff = -diff;
	for(;diff>0;diff--)
		for(i=0;real[i];i++)
			real[i] = real[i+1];
	
	for(i=0;i<strlen(replace);i++)
		real[i] = replace[i];

}
printf("%s \n",real);


}
