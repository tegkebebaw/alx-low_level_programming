#ifndef dog_H
#define dog_H
/**
*File: dog.h
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*descriptio: Header file containing declarations user defined variable type dog
* dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;
struct dog
{
char *name;
float age;
char * owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
