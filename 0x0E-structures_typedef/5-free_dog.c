#include <stdlib.h>
#include "dog_h"

/**
 * free_dog -  frees dogs.
 * @d: pointer
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
