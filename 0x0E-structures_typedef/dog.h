#ifndef DOGH
#define DOGH
/**
 * struct dog - new type of structure
 * @name : dog´s name
 * @age: age´s name
 * @owner: owner´s dog
 * Return : dog
**/
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
