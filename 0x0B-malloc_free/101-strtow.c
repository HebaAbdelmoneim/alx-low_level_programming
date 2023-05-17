#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_index - get the index of each word
 * @str: char array
 * @x: words number
 *
 * Return: integer the index
 */

int get_index(char *str, int x)
{
	int i, j, ln;

	j = 1;
	ln = strlen(str);
	for (i = 0; i < ln; i++)
	{
		if (str[i] != ' ')
		{
			if (str[i - 1] == ' ')
			{
				j++;
				if (j == x)
					return (i);
			}
		}
	}
	return (0);
}

/**
 * get_width - count char in each word
 * @str: char array
 * @x: words number
 *
 * Return: integer the array width
 */

int get_width(char *str, int x)
{
	int i, c, j, ln;

	j = 0;
	c = 0;
	ln = strlen(str);
	for (i = 0; i < ln; i++)
	{
		if (str[i] != ' ')
		{
			c++;
			if (str[i - 1] == ' ')
				j++;
		}
		else
		{
			if (j == x)
				return (c);
			c = 0;
		}
	}
	return (0);
}

/**
 * get_height - count words in array
 * @str: char array
 *
 * Return: integer the array height
 */

int get_height(char *str)
{
	int i, j, ln;

	j = 0;
	ln = strlen(str);
	for (i = 0; i < ln; i++)
	{
		if (str[i] != ' ')
		{
			if (str[i - 1] == ' ')
				j++;
		}
	}
	return (j);
}

/**
 * strtow - splits a string into words
 * @str: char array
 *
 * Return: ed array of char
 */

char **strtow(char *str)
{
	int i, j, w, x, in, h;
	char **ar;

	in = 0;
	x = 1;
	h = get_height(str);

	if (str == NULL)
		return (NULL);
	ar = malloc(h * sizeof(*ar));
	for (i = 0; i < h; i++)
	{
		if (h > 0)
			w = get_width(str, x);
		ar[i] = malloc(w * sizeof(**ar));
		x++;
		in = get_index(str, x);
		for (j = 0; j < w; j++)
		{
			ar[i][j] = str[in + j];
			if (ar == NULL)
				return (NULL);
		}
		ar[j] = '\0';
	}
	return (ar);
}
