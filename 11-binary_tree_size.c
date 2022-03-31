#include "binary_trees.h"

/**
 * binary_tree_size - calculate size of binary tree
 * @tree: pointer to binary tree subtree
 *
 * Return: size of the tree or 0 if @tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);
	while (tree)
	{
		if (tree->left)
			size += binary_tree_size(tree->left);
		if (tree->right)
			size += binary_tree_size(tree->right);
		break;
	}

	return (size);
}
