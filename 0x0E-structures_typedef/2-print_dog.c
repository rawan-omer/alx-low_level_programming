#include "dog.h"
#include <stdio.h>

/* print_dog -  function that prints a struct dog
 * @d: pointer to strcture
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s", d->name ? d->name : "(nil)");
		printf("Age: %f", d->age);
		printf("Owner: %s", d->owner ? d->owner : "(nil)");
	}
}
