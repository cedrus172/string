#include <stdio.h>
void main()
{
	char name[200000];
	/* name is declared as a single dimensional character array */

	puts("Enter your name : "); /* Displays a message */
	gets(name); /* Accepts the input */

	system("cls");

	puts("Hi there : ");
	puts(name); /* Displays the input */

}