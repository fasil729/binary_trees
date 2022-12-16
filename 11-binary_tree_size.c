#include "binary_trees.h"
/**
 * binary_tree_size - calculates size of the tree
 * @tree: is a pointer to the root node of the tree to measure the size.
 * Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (supporter(tree, 0));

}

/**
 * supporter - supports binary_tree_height function
 * @tree: is apointer to root node of the tree
 * @size: the current size of the sub-tree
 * Return: the size of the tree
 */

size_t supporter(const binary_tree_t *tree, size_t size)
{
	if (tree)
	{
		size += 1;
		size = supporter(tree->right, size);
		size = supporter(tree->left, size);
	}
	return (size);
}
