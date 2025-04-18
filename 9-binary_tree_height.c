#include "binary_trees.h"

/**
 * binary_tree_height - It measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	/* Recursively calculate the height of the left and right subtrees */
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	/* Take the larger of the two heights and add 1 for the current level */
	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}
