#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *new_dog - create new dog
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 *Return: dog struct?
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *n_dog;

n_dog = malloc(sizeof(dog_t));

if (n_dog == NULL)
return (NULL);

n_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
if (n_dog->name == NULL)
{
free(n_dog);
return (NULL);
}

n_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (n_dog->owner == NULL)
{
free(n_dog);
return (NULL);
}

n_dog->name = strcpy(n_dog->name, name);
n_dog->age = age;
n_dog->owner = strcpy(n_dog->owner, owner);

return (n_dog);
}
