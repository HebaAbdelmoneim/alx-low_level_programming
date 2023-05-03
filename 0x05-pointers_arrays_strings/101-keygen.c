#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n, i;
    char l[] = "abcdefghijklmnoqprstuvwyzx";
    char L[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    char no[] = "0123456789";
    char ch[] = "!@#$%^&*+-?&";
    char pw [15];

    srand(time(0));
    n = rand() % 4;
   for (i = 0; i < 10; i++)
   {
       if (n == 1)
        {
            pw[i] = no[rand() % 10];
            n = rand() % 4;
            printf("%c", pw[i]);
        }
        else if (n == 2)
        {
            pw[i] = l[rand() % 26];
            n = rand() % 4;
            printf("%c", pw[i]);
        }
        else if (n == 3)
        {
            pw[i] = L[rand() % 26];
            n = rand() % 4;
            printf("%c", pw[i]);
        }
        else
        {
            pw[i] = ch[rand() % 12];
            n = rand() % 4;
            printf("%c", pw[i]);
        }
   }
    return (0);
}

