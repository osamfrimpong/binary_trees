#include "binary_trees.h"
/**
 * binary_tree_size - returns the tree_size of a tree
 * @tree: pointer to tree
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size = 0, right_size = 0, left_size = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_size = binary_tree_size(tree->left);
		right_size = binary_tree_size(tree->right);
		tree_size = right_size + left_size + 1;
	}
	return (tree_size);
}
