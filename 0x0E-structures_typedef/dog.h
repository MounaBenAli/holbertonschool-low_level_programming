#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*struct dog -new structure type
 *@name:char *
 *@age:float
 *@owner: char *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 *struct dog_t - is a new name for the type struct dog.
 *@name:char *
 *@age:float
 *@owner:char *
 */
typedef struct dog_t
{
char *name;
float age;
char *owner;
} dog_t;
#endif
