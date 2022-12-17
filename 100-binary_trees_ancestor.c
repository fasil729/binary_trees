#include "binary_trees.h"
/**
 * binary_trees_ancestor - find lowest common ancestor of two nodes.
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: a pointer to the lowest common ancestor
 *  node of the two given nodes
 *  @node: apointer to the node
 *  @tree: apointer to the root of the sub-tree
 */

int find(const binary_tree_t *node, const binary_tree_t *tree);

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (!(first && second))
		return (NULL);
	if (find(second, first))
		return (first->right->parent);
	return (binary_trees_ancestor(first->parent, second));
}

/**
 * find - find the specfic node
 * @node: apointer to the node
 * @tree: pointer to the root of the sub-tree
 * Return: 1 if the poiter exists 0 othewise
 */

int find(const binary_tree_t *node, const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree == node)
		return (1);
	return (find(node, tree->right) || find(node, tree->left));
}
