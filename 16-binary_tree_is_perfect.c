#include "binary_trees.h"

/**
 * binary_tree_height - main func
 * @tree: pointer
 * Return: 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

		return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_size - main func
 * @tree: pointer
 * Return: 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - main func
 * @tree: pointer
 * Return: 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	return ((1UL << height) - 1 == size);
}
