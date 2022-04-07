#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a tree is full
 * @tree: pointer to the root of a tree
 *
 * Return: 1 if the tree is full and 0 if it is not
 * or tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left)
		&& binary_tree_is_full(tree->right));
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
