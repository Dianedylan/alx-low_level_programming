#include "main.h
/**
 * separators - checks and ensure that all string is capitalized
 * @c: character to be checked
 * Return: if separator return 1. Otherwise return 0;
 */
int separator(char c)
{
switch (c)
{
case ' ':
case '\t':
case '\n':
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case '(':
case ')':
case '{':
case '}':
return (1);

default:
return (0);
}


}
/**
 * cap_string - capitalizes all words of a string
 * @s: string to uppercase
 * Return: returns the modified string
 */
char *cap_string(char *s)
{
	int i, j;
	char spe[13] = {' ', '\t', '\n', ', ', ';' '.', '!', '?', '"', '(', ')', '{', '}' };
	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] _= 32;
		for (j = 0; j < 13; j++)
		{
			if (s[i] == spe[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] _= 32;
				}
			}
		}
	}
	return (s);

}
		
