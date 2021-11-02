#include "dog.h"
char *_strdup(char *str);

/**
 * new_dog - creates a new dog
 *@name : the name of the new dog
 *@age:the age of the new do
 *@owner :the new owner of the new dog
 *
 *Return: pointer to dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
char *namecopy;
char *ownercopy;
dog_t *milo;

milo = malloc(sizeof(dog_t));
if (!milo)
return (NULL);

namecopy = _strdup(name);
ownercopy = _strdup(owner);

if (!namecopy)
{
free(namecopy);
return (NULL);
}

if (!ownercopy)
{
free(ownercopy);
free(milo);
return (NULL);
}
milo->name = namecopy;
milo->owner = ownercopy;
milo->age = age;
return (milo);
}


/**
  * _strdup- allocates sufficient memory for the copy of str, does the dupe.
  * @str: source string
  * new: duplicated string
  * Return: a pointer to the duplicated string && return NULL if str = NULL
**/
char *_strdup(char *str)
{
int i = 0, size = 1;
char *new;

if (str == NULL)
return (NULL);

while (str[size])
{
size++;
}

new = malloc((sizeof(char) * size) +1);
if (!new)
return (NULL);

while (i < size)
{
new[i] = str[i];
i++;
}

new[i] = '\0';
return (new);
}
