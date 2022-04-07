#include "binary_trees.h"

/**
 * binary_tree_balance - calculate the difference b/n height of
 * right and left subtree
 * @tree: pointer to subtree root node
 *
 * Return: positive value or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = 0;
	right_height = 0;

	if (tree->left)
	{
		left_height++;
		left_height += binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		right_height++;
		right_height += binary_tree_height(tree->right);
	}
	return (left_height - right_height);
}

/**
 * binary_tree_height - find height of a tree
 * @tree: pointer to the root of a subtree
 *
 * Return: height of subtree or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_subtree_height = 0;
	size_t left_subtree_height = 0;

	if (tree == NULL)
		return (0);
	while (tree)
	{
		if (tree->left)
		{
			left_subtree_height++;
			left_subtree_height += binary_tree_height(tree->left);
		}
		if (tree->right)
		{
			right_subtree_height++;
			right_subtree_height += binary_tree_height(tree->right);
		}
		break;
	}
	if (right_subtree_height > left_subtree_height)
		return (right_subtree_height);
	else
		return (left_subtree_height);

}
