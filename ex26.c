/*This program is find isalpha() and isdigit().*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[] = "linumiz2021";

	int alphabet = 0, number = 0, i;
	for (i = 0; str[i] != '\0'; i++)
	{
	
		if (isalpha(str[i]) != 0)
			alphabet++;
		else if (isdigit(str[i]) != 0)
			number++;
	}

	printf("Alphabetic_letter = %d, "
		"numbers = %d\n",
		alphabet, number);

	return 0;
}

