#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse binary tree in inorder
 * @tree: pointer to root of the tree
 * @func: pointer to custom print function
 *
 */

void binary_tree_inorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left)
		binary_tree_inorder(tree->left, func);

	(*func)(tree->n);

	if (tree->right)
		binary_tree_inorder(tree->right, func);
}
