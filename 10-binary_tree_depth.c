#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_depth - measures depth of node in binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of node or 0 if NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth;
if (tree == NULL)
return (0);
if (tree->parent == NULL)
return (0);
depth = binary_tree_depth(tree->parent);
return (depth + 1);
}