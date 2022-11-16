#include "binary_trees.h"

/**
 * bst_insert - insert a node /// binary search tree
 * @tree:  is a double pointer to the root node
 * @value: is the value to store and insert
 * Return: pointer of node, or NULL on failure
 */

bst_t *bst_insert(bst_t **tree, int value)

{
bst_t *new_node = NULL;
    
if (tree == NULL)
return (NULL);

if (*tree == NULL)
return (*tree = binary_tree_node(NULL, value));

if (value < (*tree)->n)
return (bst_insert(&(*tree)->left, value));

if (value > (*tree)->n)

return (bst_insert(&(*tree)->right, value));    
return (NULL);
    
}