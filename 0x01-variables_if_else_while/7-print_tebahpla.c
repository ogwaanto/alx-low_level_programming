#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * description: prints lowercase alphabets in reverse
 * return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
