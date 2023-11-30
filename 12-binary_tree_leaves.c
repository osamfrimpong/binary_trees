#include "binary_trees.h"
/**
* binary_tree_leaves - returns the number of leaves in a tree
* @tree: pointer to tree
* Return: size_t
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_total = 0, left_leaves = 0, right_leaves = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		left_leaves = binary_tree_leaves(tree->left);
		right_leaves = binary_tree_leaves(tree->right);
		leaves_total = left_leaves + right_leaves;
		return ((!left_leaves && !right_leaves) ?
		leaves_total + 1 : leaves_total + 0);
	}
}
