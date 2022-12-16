#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * @h: height
 * Return: the balance if the tree is NULL 0
 */
int height(const binary_tree_t *tree, int h);

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;

	if (tree == NULL)
		return (0);
	balance = height(tree->left, 0) - height(tree->right, 0);
	return (balance);
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
