/*
 * =====================================================================================
 *
 *       Filename:  ex6.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  06/03/2013 10:25:11 AM
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
	int distance       = 100;
	float power        = 2.345f;
	double super_power = 56789.4532;
	char initial       = 'D';
	char first_name[]  = "Eli";
	char last_name[]   = "Gundry";

	printf("You are %d miles away!\n", distance);
	printf("You have %f levels of power!\n", power);
	printf("You have %f awsome super powers!\n", super_power);
	printf("I have the initial %c!\n", initial);
	printf("I have the first name of %s!\n", first_name);
	printf("I am of the house %s!\n", last_name);
	printf("My whole name is %s %c. %s!\n", first_name, initial, last_name);

	return 0;
}
