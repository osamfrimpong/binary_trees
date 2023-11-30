#include "binary_trees.h"

/**
 * binary_tree_uncle - checks if a node is sibling
 * @node: pointer to node to check
 * Return: pointer to the the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
	{
		return (NULL);
	}
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
