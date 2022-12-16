#include "binary_trees.h"
/**
 * binary_tree_leaves - calculates size of leaves in the tree
 * @tree: is a pointer to the root node of
 * the tree to measure the size of leaves.
 * Return: size of leaves in the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (supporter(tree, 0));

}

/**
 * supporter - supports binary_tree_leaves function
 * @tree: is apointer to root node of the tree
 * @leaves: the current size of leaves in the sub-tree
 * Return: the size of leaves in the tree
 */

size_t supporter(const binary_tree_t *tree, size_t leaves)
{
	if (tree == NULL)
		return (leaves);
	if (tree->left == NULL && tree->right == NULL)
	{
		leaves += 1;
	}
	leaves = supporter(tree->right, leaves);
	leaves = supporter(tree->left, leaves);
	return (leaves);
}
