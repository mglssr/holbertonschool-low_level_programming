#ifndef DOG_H
#define DOG_H

/**
* struct dog - whd
* @name: aod
* @age: ais
* @owner: isa
*/

typedef struct dog
{
char *name;
float age;
char *owner;
}
dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
