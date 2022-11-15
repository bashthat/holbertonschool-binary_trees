#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * Return: pointer or NULL = failure
 */

bst_t *array_to_bst(int *array, size_t size)
{
    
bst_t *xyz = NULL;
size_t i;

if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
bst_insert(&xyz, array[i]);

return (xyz);

}