#include "main.h"
/**
* _strcmp - Compares 2 strings
*@s1:First String
*@s2:Second str
* Return:0 if s1[i]=s2[i]
*/
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0 ; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++)
{}
return (s1[i] - s2[i]);
}
