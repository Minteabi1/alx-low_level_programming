#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char a[] = "_putchar";
char *c;
c = a;
while (*c != '\0')
{
_putchar(*c);
c++;
}
_putchar('\n');
return (0);
}
