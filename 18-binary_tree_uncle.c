#include "binary_trees.h"

/**
 * binary_tree_uncle - get the node uncle
 * @node: pointer to the node
 * Return: NULL or the ndoe sibling
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	grandparent = node->parent->parent;

	if (node->parent == grandparent->left)
	{
		if (grandparent->right != NULL)
			return (grandparent->right);
	}

	else
	{
		if (grandparent->left != NULL)
			return (grandparent->left);
	}

	return (NULL);
}
