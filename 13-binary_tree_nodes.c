#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_nodes - counts nodes with at least 1 child in binary tree
 * @tree: pointer to the root node
 * Return: number of nodes || 0 if NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t left_nodes, right_nodes;

    if (tree == NULL)
        return (0);
    if (tree->left == NULL && tree->right == NULL)
        return (0);
    left_nodes = binary_tree_nodes(tree->left);
    right_nodes = binary_tree_nodes(tree->right);
    return (left_nodes + right_nodes + 1);
}