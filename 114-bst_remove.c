#include "binary_trees.h"

/**
 * bst_remove - removes node
 * @root: pointer to the root
 * @value: value to remove
 * Return: pointer
 */

bst_t *bst_remove(bst_t *root, int value)
{
bst_t *node = NULL, *temp = NULL;

if (root == NULL)
return (NULL);

node = bst_search(root, value);

if (node == NULL)
return (NULL);

if (node->left == NULL && node->right == NULL)
{
if (node->parent->left == node)
node->parent->left = NULL;
else
node->parent->right = NULL;
free(node);

return (root);
}



}