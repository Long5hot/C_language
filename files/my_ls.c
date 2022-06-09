#include <stdio.h>
#include <dirent.h>

void main(int argc, char **argv)
{
	struct dirent *d;
	
	if (argc == 1)
	{	
		DIR *dir = opendir(".");
		while ((d = readdir(dir)) != NULL)
		{
			printf("%s ", d->d_name);
		}
		return;
	}

	DIR *dir = opendir(argv[1]);
	if (argc > 1)
	{
		if(argc>2)
		for (int i = 2; i < argc; i++)
		{
			printf("%s files\n", argv[i]);
			printf("*************\n");
			while ((d = readdir(dir)) != NULL)
			{
				if (strstr(d->d_name, argv[i]))
					printf("%s ", d->d_name);
			}
			printf("\n\n");
			rewinddir(dir);
		}
		else
		{
			while ((d = readdir(dir)) != NULL)
			{
			printf("%s ", d->d_name);
			}
			rewinddir(dir);
		}
	}	
		printf("\n");
	
}