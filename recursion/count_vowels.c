#include<stdio.h>

int count_vowel(char *s);

int main()
{
    char arr[] = "This is my string..";

    int num ;
    num = count_vowel(arr);

    printf("Number of vowels are...: %d\n",num);
    printf("\n");
}

int count_vowel(char *s) {
    //static int count = 0;
    if (*s=='\0')
        return 0;
    if((*s=='a')||(*s=='e')||(*s=='i')||(*s=='o')||(*s=='u')) {
        //count ++;
        return 1 + count_vowel(s+1);
    }
    count_vowel(s+1);
}