#include "binary_trees.h"
/**
 * binary_tree_depth - Function that measures the depth of node in binary tree
 * @tree: A pointer to the node to measure the depth
 * Return: the depth or 0 if the tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
