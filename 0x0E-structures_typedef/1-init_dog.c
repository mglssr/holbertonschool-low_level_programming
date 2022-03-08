#include "dog.h"
#include <stdio.h>
/**
* init_dog - initialize variable of type struct dog
* @d: uwu
* @name: kaka
* @age: owo
* @owner: TT
* Return: algo idk
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
