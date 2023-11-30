#include "binary_trees.h"
/**
* binary_tree_insert_right - inserts a node in the right side of the parent
* @parent: pointer to the parent node
* @value: integer value of the node
* Return: pointer to the new node or NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_to_create;

	if (!parent)
	{
		return (NULL);
	}

	node_to_create = binary_tree_node(parent, value);
	if (!node_to_create)
	{
		return (NULL);
	}
	if (parent->right)
	{
		node_to_create->right = parent->right;
		parent->right->parent = node_to_create;
	}
	parent->right = node_to_create;
	return (node_to_create);
}
