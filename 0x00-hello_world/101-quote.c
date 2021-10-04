#include <unistd.h>
/**
*main - Prints string with Unix builtin write()
*
*Return: Always 1(Success)
*/
int main(void)
{
write
(STDOUT_FILENO,
"and that piece of art is useful\" - Dora Korpar, 2015-10-19", 58);
write(STDERR_FILENO, "\n", 1);
return (1);
}
