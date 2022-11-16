#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure the size
 * Return: the size or 0 if the tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size, right, left;

	if (tree == NULL)
		return (0);
	else
	{
		left = binary_tree_size(tree->left);
		right = binary_tree_size(tree->right);
		size = right + left;

		return (size + 1);
	}
}
