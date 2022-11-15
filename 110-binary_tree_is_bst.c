#include "binary_trees.h"

/**
 * binary_tree_is_bst - valid tree?!
 * @tree: points to the root node
 * Return: 1 else 0;
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{

if (tree == NULL)
return (0);
if (tree->left != NULL && tree->left->n >= tree->n)
return (0);
if (tree->right != NULL && tree->right->n <= tree->n)
return (0);
if (binary_tree_is_bst(tree->left) == 0)
return (0);
if (binary_tree_is_bst(tree->right) == 0)
return (0);
return (1);

}