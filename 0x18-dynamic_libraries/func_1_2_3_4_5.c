#include <unistd.h>
#include "main.h"
#include <ctype.h>
#include <inttypes.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _islower - uwu
*@c : fe
*Return: 1 if its lowercase, 0 if its uppercase
*/
int _islower(int c)

{
if (c >= 97 && c <= 122)
	return (1);

else
	return (0);
}

/**
*_isalpha - sioxq
* @c: aaaa
*Return: 1 if is a letter, 0 if is otheewise
*/
int _isalpha(int c)
{
	if (c > 65 && c < 122)
		return (1);

	else
		return (0);
}

/**
* _abs - hehe
* @ab: abs
* Return: value ab
*/
int _abs(int ab)
{
	if (ab < 0)
		ab = ab * -1;
	return (ab);
}

/**
 *_isupper - asas
 *@c: asd
 *
 * Return:asd
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
