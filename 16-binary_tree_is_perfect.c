#include "binary_trees.h"

int is_leaf_node(const binary_tree_t *node);
int left_subtree_height(const binary_tree_t *subtree);
int traverse_inorder(const binary_tree_t *tree,
			int node_depth, int largest_depth);
/**
 * binary_tree_is_perfect - check if all nodes has 2 child node and
 * all leaf nodes are at the same level
 * @tree: pointer to root of a tree
 *
 * Return: 1 is it is perfect and 0 if it is not or @tree is NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	int largest_depth = left_subtree_height(tree);
	int depth = 0;

	return (traverse_inorder(tree, depth, largest_depth));
}

/**
 * traverse_inorder - traverse the tree inorder
 * @tree: pointer to root of a tree
 * @node_depth: depth level of tree root node
 * @largest_depth: largest depth in the whole tree
 *
 * Return: 1 if node_depth is equal with largest_depth.
 * 0 in other cases and if tree is NULL
 */

int traverse_inorder(const binary_tree_t *tree,
			int  node_depth, int largest_depth)
{
	node_depth += 1;
	if (!tree)
		return (0);
	if (is_leaf_node(tree))
	{
		return (node_depth == largest_depth ? 1 : 0);
	}
	else
	{
		return ((traverse_inorder(tree->left, node_depth, largest_depth))
		&& (traverse_inorder(tree->right, node_depth, largest_depth)));
	}
}

/**
 * is_leaf_node - check if a node of leaf node or not
 * @node: pointer to the node
 *
 * Return: 1 the node is leaf node and 0 in other cases
 */

int is_leaf_node(const binary_tree_t *node)
{
	if (!node->left && !node->right)
		return (1);
	return (0);
}

/**
 * left_subtree_height - get the most left subtree height recursively
 * @subtree: pointer to the root of subtree
 *
 * Return: (int) size of subtree of 0 if @subtree is NULL
 */

int left_subtree_height(const binary_tree_t *subtree)
{
	int ht;

	if (!subtree)
		return (0);
	ht = 0;
	while (subtree)
	{
		ht++;
		subtree = subtree->left;
	}
	return (ht);
}

