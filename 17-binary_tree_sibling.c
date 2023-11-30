#include "binary_trees.h"

/**
 * binary_tree_sibling - get the node sibling
 * @node: pointer to the node
 * Return: NULL or the ndoe sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling, *parent;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	sibling = NULL;
	parent = node->parent;

	if (node == parent->left)
	{
		sibling = parent->right;
	}
	else if (node == parent->right)
	{
		sibling = parent->left;
	}

	return (sibling);
}
