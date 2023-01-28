#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - create a node for binary tree
 * @parent: pointer to the parent of node
 * @value: value of node
 *
 * Return: NULL on failure and pointer to the node on success
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		return (NULL);
	}
	(*node).parent = parent;
	(*node).n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
