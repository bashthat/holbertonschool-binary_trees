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
{
if (root->left == NULL)
{
xyz = root->right;
free(root);
return (xyz);
}
else if (root->right == NULL)
{
xyz = root->left;
free(root);
return (xyz);
}
xyz = minValueNode(root->right);
root->n = xyz->n;
root->right = bst_remove(root->right, xyz->n);
}
return (root);
}
/**
 * minValueNode - finds the minimum value
 * @node: pointer to the root
 * Return: pointer
 */

bst_t *minValueNode(bst_t *node)
{
bst_t *current = node;
while (current && current->left != NULL)
current = current->left;
return (current);
}