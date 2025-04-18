#include "binary_trees.h"

/**
 * binary_tree_sibling - main func
 * @node: pointer to the node
 *
 * Return: pointer to the node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);
	else
		return (NULL);
}
