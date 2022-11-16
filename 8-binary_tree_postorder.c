#include "binary_trees.h"
/**
 * A function that goes through a binary tree
 * using post-order traversal
 * @tree: A pointer to the root node of the tree to transverse
 * @func: Is a pointer to a function to call for each node
 * the value in the node must be passed as a parameter to this function
 * if tree or func is NULL, do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
