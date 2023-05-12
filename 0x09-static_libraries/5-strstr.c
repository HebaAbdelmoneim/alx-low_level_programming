#include "main.h"

/**
 * _strstr - locates a substring
 *@haystack: pointer to char array
 *@needle: pointer to another char array
 *
 * Return: pointer to char array
 *
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int k;

	k = 0;
	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		k = 0;
		while (haystack[k] == needle[k])
		{
			if (haystack[k] == needle[k])
			{
				if (needle[k + 1] == '\0')
					return (haystack);
			}
			k++;
		}
		haystack++;
	}
	return ('\0');
}
