#include "binary_trees.h"
/**
 * binary_tree_nodes - returns number of nodes in a tree with children
 * @tree: pointer
 * Return: size_t nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  number_of_nodes = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		number_of_nodes += ((tree->left || tree->right) ? 1 : 0);
		number_of_nodes += binary_tree_nodes(tree->left);
		number_of_nodes += binary_tree_nodes(tree->right);
		return (number_of_nodes);
	}
}
