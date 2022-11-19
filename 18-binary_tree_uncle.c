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

	if (parent == NULL)
		return (NULL);
	if (granny == NULL)
		return (NULL);
	if (granny->left == parent)
		return (granny->right);
	else if (granny->right == parent)
		return (granny->left);
	else
		return (NULL);
}
