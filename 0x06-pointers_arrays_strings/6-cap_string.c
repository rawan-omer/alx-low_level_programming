#include "main.h"
#include <stdio.h>

/**
 * lower - is lower
 * @c: char
 * Return: 1 if true, 0 if not
*/

int lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * del - if it is delimiter
 * @c: char
 * Return: 1 if true, 0 if not
*/

int del(char c)
{
	int i;
	char d[] = ",;.!? \t\n\"(){}";

	for (i = 0; i < 13; i++)
		if (c == d[i])
			return (1);
	return (0);
}

/**
 * *cap_string - function that capitalizes all words of a string.
 * @str: string
 * Return: string
*/

char *cap_string(char *str)
{
	char *p = str;
	int f = 1;

	while (*str)
	{
		if (del(*str))
			f = 1;
		else if (lower(*str) && f)
		{
			*str -= 32;
			f = 0;
		}
		else
			f = 0;
		str++;
	}
	return (p);
}
