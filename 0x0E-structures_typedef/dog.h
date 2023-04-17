#ifndef MAIN
#define MAIN
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* struct dog - struct dog
* @name: name of dog
* @age: age of the dog
* @owner: owner of the dog
* Description: struct type of store dog attribute
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
