#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a binary tree in postorder
 * @tree: pointer to the tree root
 * @func: pointer to print function
 *
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *subtree = NULL;

	if (tree == NULL || func == NULL)
		return;

	subtree = tree;
	while (subtree)
	{
		if (subtree->left)
		{
			binary_tree_postorder(subtree->left, func);
		}
		if (subtree->right)
		{
			binary_tree_postorder(subtree->right, func);
		}
		func(subtree->n);
		break;
	}
}
