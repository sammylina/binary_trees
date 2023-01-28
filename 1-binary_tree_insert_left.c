#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node at the left of the parent
 * @parent: parent node to insert to the child node
 * @value: value of new node
 *
 * Return: if @parent==NULL or failure return NULL if succeed return
 * pointer to the new left node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	left_node = malloc(sizeof(binary_tree_t));

	if (left_node == NULL)
	{
		return (NULL);
	}

	if (parent->left)
	{
		left_node->left = parent->left;
	}

	parent->left = left_node;
	left_node->n = value;

	return (left_node);
}
