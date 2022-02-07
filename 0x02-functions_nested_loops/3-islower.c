#include "main.h"
#include <ctype.h>
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
