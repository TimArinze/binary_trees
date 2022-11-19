#include "binary_trees.h"
/**
 * binary_tree_uncle - Function that finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 * Return: pointer to the uncle node or NULL if node is NULL
 * NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *granny;

	if (node == NULL)
		return (NULL);
	if (binary_tree_is_root(node) == 1)
		return (NULL);
	parent = node->parent;
	granny = parent->parent;

	if (parent == NULL)
		return (NULL);
	if (granny == NULL)
		return (NULL);
	if (granny->left == parent)
	{
		if (granny->right)
			return (granny->right);
		else
			return (NULL);
	}
	else if (granny->right == parent)
	{
		if (granny->left)
			return (granny->left);
		else
			return (NULL);
	}
	else
		return (NULL);
}
/**
 * binary_tree_is_root - A function that checks if a given node is a root
 * @node: A pointer to the node to check
 * Return: 1 if node is a root, otherwise 0
 * if node is NULl, return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
