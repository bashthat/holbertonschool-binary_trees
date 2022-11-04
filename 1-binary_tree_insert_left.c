#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_insert_left - inserts left-child node from parent node
 * @parent: pointer to the node for insertion
 * @value: value of stored node
 * Return: pointer to new node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
if (parent == NULL)
return (NULL);
new_node = binary_tree_node(parent, value);
if (new_node == NULL)
return (NULL);
if (parent->left != NULL)
{
new_node->left = parent->left;
parent->left->parent = new_node;
}
parent->left = new_node;
return (new_node);
}
