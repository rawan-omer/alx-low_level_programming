#include "lists.h"

void test(void) __attribute__((constructor));
/**
 * test - function with constructor
 *
 * Description: print string
 * Return: nothing
*/
void test(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
