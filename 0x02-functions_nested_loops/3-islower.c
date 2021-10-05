#include "main.h"
/**
*The function _islower() checks if a charachter is lowercase
*'c'_The charachter to be checked
* Return is '1' if 'c' is lowercase, otherwise return '0'
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
