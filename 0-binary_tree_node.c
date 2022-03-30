#include "binary_trees.h"

/**
 * binary_tree_node - create a node
 *
 * @parent: pointer to the parent of the node
 * @value: interger value of the node
 *
 * Return: pointer to the newly created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->parent = parent;
	node->n = value;

	return (node);
}
