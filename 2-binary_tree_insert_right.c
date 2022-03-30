#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node right of a parent
 *
 * @parent: pointer to parent of the child node
 * @value: interger value of the new node
 *
 * Return: pointer to the newly created node or NULL if
 * the parent is NULL of failed to create a new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right)
	{
		parent->right->parent = node;
		node->right = parent->right;

		node->parent = parent;
		parent->right = node;
		node->left = NULL;
	}
	else
	{
		parent->right = node;
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
	}

	return (node);
}
