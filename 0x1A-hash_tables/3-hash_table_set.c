#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht : the hash table to be updated with key/value pair
 * @key : the key cannot be empty str
 * @value : the value associated with key
 * 
 * Return: 1 if success otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value);
{

//Insert element

    int h = hash_djb2(key, ht->size);
    int i = 0;

    /* if hash is full and key doesn't exist your previous loop would have gone on forever, I've added a check */
    /* also notice that I check if table[h] has empty key, not if it's null as this is not a pointer */
    while(ht->array[h].key != 0 && (i < ht->size)) 
    {
        if(ht->array[h].key == key)
         {
            ht->array[h].value = value;
            return; /* break is intended to quit the loop, but actually we want to exit the function altogether */
        }

        h = (h + 1) % ht->size; /* changed 11 to the size specified */
        i++; /* advance the loop index */
    }

    /* okay found a free slot, store it there */
    if(ht->table[h].key == 0) 
    {
        /* we now do direct assignment, no need for pointers */
        ht->array[h].key = key;
        ht->array[h].value = value;
    }
}

