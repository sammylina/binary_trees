#include "binary_trees.h"

/**
 * binary_tree_depth - get depth of a tree
 * @tree: pointer to root of a tree
 *
 * Return: depth of a tree of 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *curr_node = NULL;

	if (tree == NULL)
		return (0);
	curr_node = tree;
	while (curr_node->parent)
	{
		curr_node = curr_node->parent;
		depth++;
	}

	return (depth);
}
