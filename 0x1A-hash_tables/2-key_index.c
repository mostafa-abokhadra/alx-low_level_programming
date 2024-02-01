#include "hash_tables.h"

/**
 * key_index - indexing the key
 *
 * @key: the key to be hashed
 * @size: size of hash table
 *
 * Return: hash code
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
		return (hash_djb2(key) % size);
}
