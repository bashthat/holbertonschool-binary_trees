#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_balance - measures balance factor of binary tree
 * @tree: pointer to the root node
 * Return: balance factor of binary tree || 0 if NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int left_height, right_height;
if (tree == NULL)
return (0);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return (left_height - right_height);
}

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to the root node
 * Return: 1-full, 0therwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
if (tree->left != NULL && tree->right != NULL)
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
return (0);
}

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

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to the root node
 * Return: 1 if perfect || 0 if NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (binary_tree_is_full(tree) == 0)
return (0);
if (binary_tree_balance(tree) != 0)
return (0);
return (1);
}
