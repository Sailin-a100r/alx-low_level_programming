#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner's name
 *
 * Description: dog structure of name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
