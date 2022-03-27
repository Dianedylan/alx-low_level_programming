#include <stdio.h>

#include <stdlib.h>

/**
* main - main block
* Description: prints all single digit numbers of base 10
* starting from 0, followed by a new line.
* Return: 0
*/

int main(void)

{
int d;

int c;
for (d = 0; d <= 9; d++)
{
for (c = d + 1; c <= 9; c++)
{

putchar('0' + d);
putchar('0' + c);

if (d < 8)

{

putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);

}
