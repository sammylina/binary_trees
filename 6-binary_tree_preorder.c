#include "binary_trees.h"

/**
 * binary_tree_preorder - print a binary tree in preorder
 * @tree: pointer to root of the tree
 * @func: a pointer to the function that prints the node value
 *
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *curr_node = NULL;

	if (tree == NULL || func == NULL)
	{
		return;
	}
	curr_node = tree;
	while (curr_node)
	{
		func(curr_node->n);
		if (curr_node->left)
		{
			binary_tree_preorder(curr_node->left, func);
		}
		if (curr_node->right)
		{
			binary_tree_preorder(curr_node->right, func);
		}
		break;
	}
}
