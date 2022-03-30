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
	binary_tree_t *node;

	if (parent == NULL)
	{
		return (NULL);
	}

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = value;
	if (parent->left)
	{
		node->left = parent->left;
		node->left->parent = node;

		parent->left = node;
		node->parent = parent;
		node->right = NULL;
	}
	else
	{
		node->parent = parent;
		parent->left = node;
		node->right = NULL;
		node->left = NULL;
	}

	return (node);
}
