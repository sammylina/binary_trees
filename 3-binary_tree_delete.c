#include "binary_trees.h"

/**
 * binary_tree_delete - delete entire binary tree
 * @tree: pointer to the root of the binary tre
 *
 */

void binary_tree_delete(binary_tree_t *tree)
{

	binary_tree_t *curr, *temp;

	if (tree == NULL)
		return;

	curr = tree;
	while (curr)
	{
		if (curr->left)
		{
			curr = curr->left;
			continue;
		} else if (curr->right)
		{
			curr = curr->right;
			continue;
		} else
		{
			temp = curr->parent;
			free(curr);
			curr = temp;
			temp = NULL;
		}
	}
}
