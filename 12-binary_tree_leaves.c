#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to root node of the tree
 * Return: the amount of leaves on the structure, 0 if tree is NULL
 * A NULL pointer is not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
return (1);
else
return (binary_tree_leaves(tree->left)) +
(binary_tree_leaves(tree->right));
}
