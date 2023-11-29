#include "binary_trees.h"

/**
 * binary_tree_depth - caluclate the depth of tree
 * @tree: pointer to tree
 * Return: 0 if fail otherwise incrementation
 * Description: traverse to the top from the base node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}
	else
	{
		return (1 + binary_tree_depth(tree->parent));
	}
}
