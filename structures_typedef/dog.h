#ifndef DOG_H
#define DOG_H
/**
* struct dog - dog attributes
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* description: the attributes of a dog
*/
struct dog
{
	char *name;
	int age;
	char *owner;
};

/**
* dog_t - typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);

#endif
