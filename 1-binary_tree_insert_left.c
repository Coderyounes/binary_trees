#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node to the left of a tree
 * @parent: pointer to the tree
 * @value:  data node
 * Return: newnode or NULL if fail
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
	{
		return (NULL);
	}

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	else
	{
		parent->left = newnode;
	}

	return (newnode);
}