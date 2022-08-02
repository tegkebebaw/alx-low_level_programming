#include "dog.h"
/**
 * init_dog - initialize
 *@d: structure passed
 *@name: name index value
 *@age: age index value
 *@owner: owner index value
 * Return: pointer to allocated size if good.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if(d)
{
d ->name = name;
d ->age = age;
d- >owner = owner;
}
}
