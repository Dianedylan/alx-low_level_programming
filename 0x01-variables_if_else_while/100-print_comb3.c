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
int c;

int d = 0;



while (d < 100)

{

c = 0;

while (c < 10)

{



putchar('0' + (d / 10));
putchar('0' + (c % 10));

if (c + d != 99)

{

putchar(',');
putchar(' ');
}

d++;

}

c++;

}
putchar('\n');

return (0);

}
