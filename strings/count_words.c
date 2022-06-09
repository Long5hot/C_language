#include <stdio.h>
#include <string.h>
void main()
{
	char s[100];

	scanf("%[^\n]", s);

	int i, j, word = 1;
	int b = strlen(s);

	for (j = 0; s[j] == ' '; j++);
	for (i = j; i < b - 1; i++)
	{
		if (s[i] == ' ' && s[i + 1] == '\0')
			continue;
		if (s[i] == ' ' && s[i + 1] != ' ')
			word++;
	}

	printf("%d words..\n", word);
}
