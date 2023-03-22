#include <stdio.h>

/**
*main - "alphabet in lc apart from q and e"
*Return: return (0)
*/

int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i != 'e' && i != 'q')
{
putchar(i);
}
}
putchar('\n');

return (0);
}
