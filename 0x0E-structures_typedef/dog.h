#ifndef DOG_H
#define DOG_H
/**
 *struct dog-> this structure holds the attributes of a dog.
 *@name: member1
 *@age: member2
 *@owner: member3
 */

typedef struct dog dog_t
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t->  typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
