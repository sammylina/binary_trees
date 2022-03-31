#include "binary_trees.h"

/**
 * binary_tree_height - return height of a tree
 * @tree: pointer to the tree
 *
 * Return: height of tree or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);
	while (tree)
	{
		if (tree->left)
		{
			height_left++;
			height_left += binary_tree_height(tree->left);
		}
		if (tree->right)
		{
			height_right++;
			height_right += binary_tree_height(tree->right);
		}
		break;
	}
	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}
