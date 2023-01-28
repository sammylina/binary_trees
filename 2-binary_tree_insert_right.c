#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node at the right of the parent
 * @parent: parent node to insert to the child node
 * @value: value of new node
 *
 * Return: if @parent==NULL or failure return NULL if succeed return
 * pointer to the new right node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	right_node = malloc(sizeof(binary_tree_t));

	if (right_node == NULL)
	{
		return (NULL);
	}

	right_node->n = value;
	right_node->left = NULL;

	if (parent->right)
	{
		right_node->right = parent->right;
		right_node->right->parent = right_node;
	} else
	{
		right_node->right = NULL;
	}

	parent->right = right_node;
	right_node->parent = parent;

	return (right_node);
}
