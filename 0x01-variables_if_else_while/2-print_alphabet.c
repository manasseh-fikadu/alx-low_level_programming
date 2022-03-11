#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        for(int x = 'A'; x <= 'Z'; x++)
        {
		int lower_x = tolower(x);
		putchar(lower_x);
        }
        putchar('\n');

        return (0);
}
