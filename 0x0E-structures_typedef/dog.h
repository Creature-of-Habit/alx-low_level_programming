#ifndef DOG
#define DOG

/**
 * struct dog - structure type with three elements
 * @name: char pointer with memory address of dog name
 * @age: float var with dog age
 * @owner: char pointer with address of owner name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
