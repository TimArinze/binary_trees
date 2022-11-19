#include "binary_trees.h"
/**
 * binary_tree_sibling - Function that finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 * Return: node or parent is NULL return NULL
 * if node has no sibling return NULL Or return the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL)
		return (NULL);
	parent = node->parent;
	if (parent == NULL)
		return (NULL);
	if (node == parent->left)
	{
		if (parent->right)
			return (parent->right);
		else
			return (NULL);
	}
	else if (node == parent->right)
	{
		if (parent->left)
			return (parent->left);
		else
			return (NULL);
	}
	else
		return (NULL);
}
