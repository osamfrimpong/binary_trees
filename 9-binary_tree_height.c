#include "binary_trees.h"

/**
* binary_tree_height - computes the height of a binary tree
* @tree: pointer to tree
* Return: int
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			if (tree->left)
			{
				left_height = 1 + binary_tree_height(tree->left);
			}
			else
			{
				left_height = 0;
			}

			if (tree->right)
			{
				right_height = 1 + binary_tree_height(tree->right);
			}
			else
			{
				right_height = 0;
			}

		}

		if (left_height > right_height)
		{
			return (left_height);
		}
		else
		{
			return (right_height);
		}
	}
}
