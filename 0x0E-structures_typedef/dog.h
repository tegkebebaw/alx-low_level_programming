#ifndef dog_H
#define dog_H
typedef struct dog dog_t;
struct dog
{
char *name;
float age;
char * owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
