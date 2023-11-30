#include "binary_trees.h"
/**
 * binary_tree_is_full - checks says if a tree is full or not
 * @tree: pointer to tree
 * Return: int 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_check = 0, right_check = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
			left_check = binary_tree_is_full(tree->left);
			right_check = binary_tree_is_full(tree->right);
			if (left_check == 0 || right_check == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!tree->left && !tree->right)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
