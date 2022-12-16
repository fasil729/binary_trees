#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert node to left of given parent noee
 * Description - If parent already has a left-child, the new node must take
 *  its place, and the old left-child must
 *  be set as the left-child of the new node.
 * @parent: is a pointer to the node to insert the left-child in
 * @value: a value stored in the node
 * Return: a pointer to the created node, or NULL
 * on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL || parent == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	if (parent->left == NULL)
	{
		parent->left = new;
		new->right = NULL;
		return (new);
	}
	new->right = parent->left->right;
	new->left = parent->left;
	parent->left->parent = new;
	parent->left->right = NULL;
	parent->left->left = NULL;
	parent->left = new;
	return (new);
}
