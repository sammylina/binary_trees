#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is root node
 * @node: pointer to node
 *
 * Return: 1 if node is root or 0 if it is not and node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
