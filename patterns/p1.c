//*
//**
//***
//****
//*****
#include<stdio.h>
void main()
{
char ch;
int i, j;
for(i=0;i<5;i++)
{	for(j=0,ch=97;j<=i;j++,ch++)
	printf("%c",ch);

	printf("\n");
}
printf("\n");
}
