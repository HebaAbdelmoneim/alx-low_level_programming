#include <stdio.h>
#include "main.h"

/**
 * print_buffer_string - prints string in buffer
 *@x: pointer to the buffer
 *@st1: the line begining
 *@cd1: the line end
 *
 * Return: void
 *
 */

void print_buffer_string(char *x, int st1, int cd1)
{
	int j, k, check;
	char ch[] = {'\n', '\0', '\t', '\1', '\2', '\3', '\4', '\5', '\6', '\7'};

	for (k = st1; k <= cd1; k++)
	{
		check = 0;
		for (j = 0; j < 10; j++)
		{
			if (x[k] == ch[j])
				check = 1;
		}
		if (check == 1)
			printf("%c", '.');
		else
			printf("%c", x[k]);
	}
	printf("\n");
}

/**
 * print_buffer -  prints a buffer
 *@b: pointer to the buffer array
 *@size: array size
 *
 * Return: void
 *
 */

void print_buffer(char *b, int size)
{
	int i, ot, st, cd;

	ot = size % 10;
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (i % 10 == 0)
				printf("%08x: ", i);
			if (i % 2 == 0)
				printf("%02x%02x ", b[i], b[i + 1]);
			if ((i + 1) % 10 == 0)
			{
				st = i - 9;
				cd = i;
				print_buffer_string(b, st, cd);
			}
			else if (i == size - 1)
			{
				st = i - ot + 1;
				cd = size - 1;
				while (ot != 10)
				{
					printf("  ");
					ot++;
				}
				printf("  ");
				print_buffer_string(b, st, cd);
			}
		}
	}
	else
		printf("\n");
}
