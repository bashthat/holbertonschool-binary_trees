#include "binary_trees.h"

/**
 * bst_remove - removes node
 * @root: pointer to the root
 * @value: value to remove
 * Return: pointer
 */

bst_t *bst_remove(bst_t *root, int value)

{

bst_t *xyz = NULL;

if (root == NULL)

return (NULL);

if (value < root->n)

root->left = bst_remove(root->left, value);

else if (value > root->n)

root->right = bst_remove(root->right, value);

else

}