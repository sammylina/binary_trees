#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes that has at least one child node
 * @tree: pointer to the root node
 *
 * Return: number of nodes or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);
	while (tree)
	{
		if (tree->right || tree->left)
		{
			nodes++;
			nodes += binary_tree_nodes(tree->right);
			nodes += binary_tree_nodes(tree->left);
		}
		break;
	}
	return (nodes);
}
