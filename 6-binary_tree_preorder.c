#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node.
 *        The value in the node must be passed as a parameter to this function.
 *
 * Description: If tree or func is NULL, do nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n); /* Call func on the current node's value */
	binary_tree_preorder(tree->left, func); /* Recur on the left child */
	binary_tree_preorder(tree->right, func); /* Recur on the right child */
}
