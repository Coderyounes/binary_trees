#include "binary_trees.h"

/**
 * binary_tree_balance - calculate balance factor
 * @tree: pointer to tree
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftheight = 0, rightheight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		leftheight = 1 + binary_tree_balance(tree->left);
	if (tree->right)
		rightheight = 1 + binary_tree_balance(tree->right);

	return (leftheight - rightheight);
}
