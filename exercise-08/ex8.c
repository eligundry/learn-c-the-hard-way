/*
 * =====================================================================================
 *
 *       Filename:  ex8.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  06/03/2013 10:43:46 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eli Gundry
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int areas[] = { 10, 12, 13, 14, 20 };
	char name[] = "Eli";
	char full_name[] = {
		'E', 'l', 'i',
		' ', 'D', '.', ' ',
		'G', 'u', 'n', 'd', 'r', 'y', '\0'
	};

	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of areas (int[]): %ld\n", sizeof(areas));
	printf("The number of ints in area: %ld\n", sizeof(areas) / sizeof(int));

	int i;
	for (i = 0; i < (sizeof(areas) / sizeof(int)); ++i) {
		printf("Area %d: %d\n", i + 1, areas[i]);
	}

	printf("The size of a char: %ld\n", sizeof(char));
	printf("The size of name (char[]): %ld\n", sizeof(name));
	printf("The number of chars in name: %ld\n", sizeof(name) / sizeof(char));

	printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
	printf("The number of chars in full_name: %ld\n", sizeof(full_name) / sizeof(char));

	printf("Name = \"%s\"\n", name);
	printf("Full Name = \"%s\"\n", full_name);

	return 0;
}
