#include "binary_trees.h"

/**
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL && node->left == NULL && node->right == NULL)
	{
		return (1);
	}

	if (node->parent && node->left == NULL && node->right == NULL)
	{
		return (1);
	}

	return (0);
}
