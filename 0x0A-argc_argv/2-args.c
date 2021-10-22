#include "main.h"
#include <string.h>
/**
 * main - Prints all arguments it receives.
 * @argc: number of command line arguments
 * @argv: unused parameter
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
