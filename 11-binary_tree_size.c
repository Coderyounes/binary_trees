#include "binary_trees.h"

/**
 * binary_tree_size - calculate the size of tree
 * @tree: pointer to tree
 * Return: 0 if fail , otherwise the size of the tree
 * Description: this function count nodes recursivly until hit the NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
	}
}
