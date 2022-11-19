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
	parent = node->parent;
	granny = parent->parent;

	if (!(node->parent))
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
