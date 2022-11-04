#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_sibling - finds sibling node
 * @node: pointer to the node to find sibling
 * Return: sibling node || NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL)
        return (NULL);
    if (node->parent == NULL)
        return (NULL);
    if (node->parent->left == node)
        return (node->parent->right);
    return (node->parent->left);
}