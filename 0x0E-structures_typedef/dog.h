#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - information about dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#define dog_t struct dog
void init_dog(struct dog *d, char *name, float *age, char *owner);
void print_dog(struct dog *d);
#endif
