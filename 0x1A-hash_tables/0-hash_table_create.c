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
/* Creates a new HashTable*/
hash_table_t *table;

if (size < 1)
return (NULL);

table = (hash_table_t *)malloc(size * sizeof(hash_table_t));
if (table == NULL)
return (NULL);

table->array = malloc(size * sizeof(hash_table_t));
if (table->array == NULL)
return (NULL);

table->size = size;

return (table);
}
