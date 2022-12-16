#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: is a pointer to the root node of
 * the tree to measure the size of nodes.
 * Return: size of nodes in the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (supporter(tree, 0));

}

/**
 * supporter - supports binary_tree_nodes function
 * @tree: is apointer to root node of the tree
 * @nodes: the current size of nodes in the sub-tree
 * Return: the size of leaves in the tree
 */

size_t supporter(const binary_tree_t *tree, size_t nodes)
{
	if (tree == NULL)
		return (nodes);
	if (tree->left != NULL || tree->right != NULL)
	{
		nodes += 1;
	}
	nodes = supporter(tree->right, nodes);
	nodes = supporter(tree->left, nodes);
	return (nodes);
}
