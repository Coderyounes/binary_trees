#include "binary_trees.h"

/**
 * binary_tree_node - create a root or parent node
 * @parent: pointer to root
 * @value:  integer(data) in the node
 * Return: Null if the memo allocation fail, or newnode if success
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
