#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node to measure
 * Return: size of binary tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
else
return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
