#include "binary_trees.h"
/**
 * binary_tree_height - calculates heght of the tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: height of hte tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (supporter(tree, 0));

}

/**
 * supporter - supports binary_tree_height function
 * @tree: is apointer to root node of the tree
 * @height: the current height of the tree
 * Return: the height
 */

size_t supporter(const binary_tree_t *tree, size_t height)
{
	size_t right, left;

	if (tree == NULL)
		return (height - 1);
	if (tree)
	{
		right = supporter(tree->right, height + 1);
		left = supporter(tree->left, height + 1);
	}
	if (right > left)
		return (right);
	return (left);
}
