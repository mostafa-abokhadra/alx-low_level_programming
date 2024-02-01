#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%d\n", hash_table_set(ht, "hetairas", "cool"));
    printf("%d\n", hash_table_set(ht, "mentioner", "cool"));
    printf("%d\n", hash_table_set(ht, "heliotropes", "cool"));
    printf("%d\n", hash_table_set(ht, "neurospora", "cool"));
    printf("%d\n", hash_table_set(ht, "depravement", "cool"));
    printf("%d\n", hash_table_set(ht, "serafins", "cool"));
    printf("%d\n", hash_table_set(ht, "stylist", "cool"));
    printf("%d\n", hash_table_set(ht, "subgenera", "cool"));
    return (EXIT_SUCCESS);
}
