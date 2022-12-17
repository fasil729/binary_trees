#include "binary_trees.h"
/**
 * binary_tree_uncle - find uncle of the node
 * @node: a pointer to the node to find the uncle
 * Return: a pointer to the uncle node
 * If node is NULL or the parent is NULL, return NULL
 * If node has no uncle, return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand;

	if (!(node) || !(node->parent) || !(node->parent->parent))
		return (NULL);
	grand = node->parent->parent;
	if (grand->right == node->parent)
		return (grand->left);
	return (grand->right);
}
