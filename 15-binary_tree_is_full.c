#include "binary_trees.h"
/**
 * binary_tree_is_full - check if the tree is full
 * @tree: a pointer to a root of the tree
 * Return: 1 if tree is full otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{	int left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left && tree->right)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		return (left && right);
	}
	return (0);
}
