#ifndef _DOG_H_
#define _DOG_H_

/**
 * Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct that stores some information of a dog
 */
 
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
