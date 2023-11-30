#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is leaf
 * @node: pointer to node to check
 * Return: int 1 if leaf or 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
