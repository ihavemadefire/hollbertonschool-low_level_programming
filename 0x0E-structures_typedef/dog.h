#ifndef dog_h
#define dog_h
/**
 * struct dog - dog attributes
 * @name: Dog Name
 * @owner: owner name
 * @age: Age of dog
 * Description: Data type to store doggie-flavored info
 */
struct dog
{
	char *name;
	char  *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
