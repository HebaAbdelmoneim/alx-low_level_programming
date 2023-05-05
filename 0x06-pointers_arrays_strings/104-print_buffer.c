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
	int k;

	for (k = st1; k <= cd1; k++)
	{
		if (x[k] >= 32 && x[k] <= 126)
			printf("%c", x[k]);
		else
			printf("%c", '.');
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
				if (ot % 2 == 0)
				{
					while (ot < 10)
					{
						printf("     ");
						ot+=2;
					}
				}
				else
				{
					while (ot < 9)
                                        {
                                                printf("     ");
                                                ot+=2;
                                        }
				}
				print_buffer_string(b, st, cd);
			}
		}
	}
	else
		printf("\n");
}
