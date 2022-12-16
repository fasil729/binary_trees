#include "binary_trees.h"
/**
 * binary_tree_depth - calculates Depth of the node
 * @tree: is a pointer to the node of the tree to measure the Depth in the tree.
 * Return: Depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	binary_tree_t *temp = tree->parent;

	size_t depth;

	depth = 0;
	while (temp)
	{
		depth += 1;
		temp = temp->parent;
	}
	return (depth);
}
