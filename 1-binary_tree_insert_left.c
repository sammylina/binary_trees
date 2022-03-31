#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node left of the parent
 *
 * @parent: pointer to the parent
 * @value: integer value of new node
 *
 * Return: pointer to newly inserted left node or
 * NULL if it fails or no parent
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	node = binary_tree_node(parent, value);
	if (parent->left == NULL)
	{
		parent->left = node;
	}
	else
	{
		parent->left->parent = node;
		node->left = parent->left;

		parent->left = node;
	}

	return (node);
}
