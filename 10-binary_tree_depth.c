#include "binary_trees.h"
#include <stddef.h>
#include <stdio.h>
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to node
 * Return: 0 if tree is NULL, depth of a node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t d = 0;
while (tree && tree->parent)
{
tree = tree->parent;
d++;
}
return (d);
}
