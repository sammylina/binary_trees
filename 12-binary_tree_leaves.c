#include "binary_trees.h"

/**
 * binary_tree_leaves - count leaves in a tree
 * @tree: pointer to a tree
 *
 * Return: number of leaves or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	while (tree)
	{
		if (!tree->left && !tree->right)
		{
			leaves++;
			break;
		}
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
		break;
	}

	return (leaves);
}
