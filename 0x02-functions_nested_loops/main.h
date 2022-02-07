#include <stdio.h>
#include <unistd.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _putchar(char c)
{
      return (write(1, &c, 1));
}





void print_alphabet(void)

{
    char ch;
ch = 'a';
    while (ch <= 'z')
    {
        putchar(ch);
        ch++;
    }
}
