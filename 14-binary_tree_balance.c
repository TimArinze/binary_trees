#include "binary_trees.h"
#include <math.h>
/**
 * binary_tree_balance - Function that measures the balance factor
 * of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor or 0 if tree is NULL;
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
/**
 * binary_tree_height - A function that measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL or the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height, left_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
