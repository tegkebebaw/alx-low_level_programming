#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print dog atribute
 *@d: dog object passed as parameter
 */
void print_dog(struct dog *d)
{
if(d == NULL)
printf("(nil)\n");
else
{
if(d->name == NULL)
printf("Name: (nil)\n");
else
printf("name:%s\n", d->name);
if(d->age == NULL)
printf("age: (nil)\n");
else
printf("age:%lf\n", d->age);
if(d->owner == NULL)
printf("owner: (nil)\n");
else
printf("owner:%s\n", d->owner);
}
}
