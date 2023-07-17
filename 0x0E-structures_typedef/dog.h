#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the name of the dog's owner.
 *
 * Description: This struct represents a dog with its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void print_dog(const dog_t *d);
void init_dog(dog_t *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

char *_strcpy(char *dest, const char *src);
int _strlen(const char *s);

#endif /* DOG_H */
