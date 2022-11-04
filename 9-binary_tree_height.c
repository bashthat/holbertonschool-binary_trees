#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_height - measures height of binary tree
 * @tree: pointer to root node of tree to measure height
 * Return: tree height or 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);
    if (tree->left == NULL && tree->right == NULL)
        return (0);
    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);
    if (left_height > right_height)
        return (left_height + 1);
    else
        return (right_height + 1);
}