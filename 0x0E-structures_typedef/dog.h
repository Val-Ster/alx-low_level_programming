#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents information about a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void initialize_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
void initialize_dog(struct dog *d, char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);

#endif
