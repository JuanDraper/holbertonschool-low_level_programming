#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - blabla
 * @d:vlavka
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
