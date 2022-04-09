#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - ptint alphabet in low cases
 *
 * Describtion: to print alphabet in low casedd.
 * return: always (0)
 *
 */
int main(void)
{
int c;

for (c = 0; c < 26; ++c)
putchar('a' + c);
putchar('\n');
return (0);	
}
