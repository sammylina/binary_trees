#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is leaf or not
 *@node: pointer to the node
 *
 * Return: 1 if it is node and 0 if not or node is NULL
 */

int binary_tree_is_leaf(binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
