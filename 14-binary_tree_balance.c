#include "binary_trees.h"

/**
 * binary_tree_balance - calculate balance factor
 * @tree: pointer to tree
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}


/**
 * binary_tree_height - calculate tree height
 * @tree: pointer to tree
 * Return: the max height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftheight = 0, rightheight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		leftheight = 1 + binary_tree_height(tree->left);
	}
	else
	{
		leftheight = 1;
	}

	if (tree->right)
	{
		rightheight = 1 + binary_tree_height(tree->right);
	}
	else
	{
		rightheight = 1;
	}

	if (leftheight >= rightheight)
		return (leftheight);
	else
		return (rightheight);
}
