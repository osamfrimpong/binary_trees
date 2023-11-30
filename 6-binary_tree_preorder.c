#include "binary_trees.h"

/**
 * binary_tree_preorder - outputs the values of tree using pre-order
 * @tree: pointer to tree
 * @func: pointer to function
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
