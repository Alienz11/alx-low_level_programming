#ifndef _DOG_H_
#define _DOG_H_

/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */
/**
 * struct dog - A struct fuction taht gives details of a dog.
 * @name: vriable to print name of dog.
 * @age: variable to print age of dog.
 * @owner: variable to print owner of dog.
 *
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif /*_DOG_H_*/
