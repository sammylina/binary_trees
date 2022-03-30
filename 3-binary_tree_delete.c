#include "binary_trees.h"

/**
 * binary_tree_delete - delete the entire binary tree
 *
 * @tree: pointer to the root of the binary tree
 *
 * Return: Nothing.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *current;

	if (tree == NULL)
	{
		return;
	}
	
	current = subtree_left(tree);
	while (current->parent)
	{
		current = current->parent;
		if (current->left)
		{
			free(current->left);
			current->left = NULL;
		}
		if (current->right)
		{
			current = subtree_left(current->right);
			current = current->parent;
			free(current->right);
			current->right = NULL;
		}
	}
	free(current);
}

binary_tree_t *subtree_left(binary_tree_t *subtree)
{
	binary_tree_t *current;

	if (subtree == NULL)
	{
		return (subtree);
	}
	else
	{
		current = subtree;
		while (current)
		{
			if (current->left)
			{
				current = current->left;
			}
			else if (current->right)
			{
				current = current->right;
			}
			else
			{
				break;
			}
		}
		return (current);
	}
}
