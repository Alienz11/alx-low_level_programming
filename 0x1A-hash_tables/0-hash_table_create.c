#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - A function tht creates a harsh table.
 * @size: The arguments that decides the size of a harsh table.
 * Return: a pointer to the newly created harsh table (table).
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;
unsigned long int i;

table = malloc(sizeof(hash_table_t));
if (!table)
{
free(table);
return (NULL);
}
table->size = size;
table->array = malloc(sizeof(hash_table_t *) * size);
if (!table->array)
{
free(table);
return (NULL);
}
while (i < size)
{
table->array[i] = NULL;
i++;
}
return (table);
}
