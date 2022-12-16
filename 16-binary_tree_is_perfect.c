#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if the binary tree is perfet
 * @tree: a pointer to the root of the tree
 * @h: height
 * Return: 1 if tree is perfect otherwise 0
 */
int height(const binary_tree_t *tree, int h);

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left != NULL && tree->right != NULL)
	{
		if (height(tree->left, 0) == height(tree->right, 0))
		{
			left = binary_tree_is_perfect(tree->left);
			right = binary_tree_is_perfect(tree->right);
			return (left && right);
		}
	}
	return (0);
}

/**
 * height - calculate tree height
 * @tree: - a pointer to the root node of the sub-tree
 * @h: - height of sub-tree
 * Return: height
 */

int height(const binary_tree_t *tree, int h)
{
	int left, right;

	if (tree == NULL)
		return (h);
	h++;
	left = height(tree->left, h);
	right = height(tree->right, h);
	if (right > left)
	{
		return (right);
	}
	return (left);
}
