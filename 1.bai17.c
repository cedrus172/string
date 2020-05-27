#include<stdio.h>
#include<string.h>

void main()
{
	char str1[150];
	char str2[150];
	puts("\nNhap string 1 : " );
	gets(str1);
	puts("\nNhap string 2 : " );
	gets(str2);

	if (strstr(str1, str2) != NULL)
		printf("%s occurs in %s\n", str2, str1);
	else
		printf("%s does not occur in %s\n", str2, str1);
	if (strstr(str2, str1) != NULL)
		printf("%s occurs in %s\n", str1, str2);
	else
		printf("%s does not occur in %s\n", str1, str2);

}