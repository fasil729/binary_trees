#include "binary_trees.h"
/**
 * binary_tree_depth - calculates Depth of the node
 * @tree: is a pointer to the node of the tree to measure the Depth in the tree.
 * Return: Depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *temp;

        size_t depth;

	if (tree == NULL)
		return (0);
	depth = 0;
	temp = tree->parent;
	while (temp)
	{
		depth += 1;
		temp = temp->parent;
	}
	return (depth);
}
