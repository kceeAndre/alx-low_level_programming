#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main Entry
 * @argc: input
 * @argv: input
 * Return: Always 0 (success)
**/
int main(int argc, char *argv[])
{
int cents, coin = 0;

if (argc == 2)
{
cents = atoi(*(argv + 1));
while (cents > 0)
{
if (cents % 25 < cents)
{
cents -= 25;
coin++;
}
else if (cents % 10 < cents)
{
cents -= 10;
coin++;
}
else if (cents % 5 < cents)
{
cents -= 5;
coin++;
}
else if (cents % 2 < cents)
{
cents -= 2;
coin++;			}
else if (cents % 1 < cents)
{
cents -= 1;
coin++;
}
}
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", coin);
return (0);
}

