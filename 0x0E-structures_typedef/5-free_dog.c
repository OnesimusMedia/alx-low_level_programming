#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog structure
 * @d: Pointer to the dog structure
 *
 * Description: This function frees the memory 
 * allocated for the dog structure
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
