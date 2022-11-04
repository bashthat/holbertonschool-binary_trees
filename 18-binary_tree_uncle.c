#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_uncle - uncle
 * @node: pointer to the node to find uncle
 * Return: uncle node || NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL)
        return (NULL);
    if (node->parent == NULL)
        return (NULL);
    if (node->parent->parent == NULL)
        return (NULL);
    if (node->parent->parent->left == node->parent)
        return (node->parent->parent->right);
    return (node->parent->parent->left);
}