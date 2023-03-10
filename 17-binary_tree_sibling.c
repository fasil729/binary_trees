#include "binary_trees.h"
/**
 * binary_tree_sibling - find sbling of the node
 * @node: a pointer to the node to find the sibling
 * Return: a pointer to the sibling node
 * If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!(node) || !(node->parent))
		return (NULL);
	parent = node->parent;
	if (parent->right == node)
		return (parent->left);
	return (parent->right);
}
