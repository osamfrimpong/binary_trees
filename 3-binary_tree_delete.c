#include "binary_trees.h"

/**
* binary_tree_delete - deletes a binary tree
* @tree: binary tree to delete
* Return: void
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}
}
