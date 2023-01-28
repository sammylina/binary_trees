#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse binary tree in preorder
 * @tree: pointer to root of the tree
 * @func: pointer to custom print function
 *
 */

void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	(*func)(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, func);

	if (tree->right)
		binary_tree_preorder(tree->right, func);
}
