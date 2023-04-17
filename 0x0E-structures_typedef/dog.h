#ifndef MYHEADER_H
#define MYHEADER_H
/**
 * struct dog - structure of type dog
 * @name: nam of d
 * @age: age of d
 * @owner: owner of d
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif
