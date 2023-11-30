#include "binary_trees.h"
/**
* binary_tree_depth - gets the depth of a node from the root
* @tree: pointer to node
* Return: int
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth = 0;

	if (tree && tree->parent)
	{
		tree_depth = 1 + binary_tree_depth(tree->parent);
	}
	else
	{
		tree_depth = 0;
	}
	return (tree_depth);
}
