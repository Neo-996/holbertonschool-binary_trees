#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is null, number of nodes with a child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t c = 0;
if (tree == NULL)
{
return (0);
}
if (tree->left != NULL || tree->right != NULL)
{
c = 1;
}
c += binary_tree_nodes(tree->left);
c += binary_tree_nodes(tree->right);
return (c);
}
