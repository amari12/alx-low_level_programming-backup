#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - allocated memory using malloc
 *@b: size?
 *Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
char *p;

p = malloc(b);

if (p == NULL)
{
free(p);
return (p);
}
else
{
return (p);
}
}
