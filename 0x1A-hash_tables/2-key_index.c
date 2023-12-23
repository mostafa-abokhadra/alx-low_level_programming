#include "hash_tables.h"
#include <stdio.h>
/**
 *
 *
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size __attribute__((unused)))
{
		unsigned long int idx = hash_djb2(key);
		return idx % 2;
}
