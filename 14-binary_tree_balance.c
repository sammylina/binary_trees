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
		left_height = binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		right_height = binary_tree_height(tree->right);
	}
	printf("left: %d, right: %d \n", left_height, right_height);
	return (left_height - right_height);
}
