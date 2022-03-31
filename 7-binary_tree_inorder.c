#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse a binary tree inorder
 * @tree: pointer to root node
 * @func: pointer to print function
 *
 * Return: Nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *subtree = NULL;

	if (tree == NULL || func == NULL)
		return;

	subtree = tree;
	while (subtree)
	{
		if (subtree->left)
		{
			binary_tree_inorder(subtree->left, func);
		}
		func(subtree->n);
		if (subtree->right)
		{
			binary_tree_inorder(subtree->right, func);
		}
		break;
	}
}

