#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: pointer to tree
 * Return: 0 if false , 1 if true
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_depth = 0, right_depth = 0;

	if (tree == NULL)
		return (0);

	left_depth = binary_tree_height(tree->left);
	right_depth = binary_tree_height(tree->right);

	if (left_depth == right_depth)
		return (1);

	return (0);
}


/**
 * binary_tree_height - calculate the height of each side
 * @tree: pointer to tree
 * Return: the height of a tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftheight = 0, rightheight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		leftheight = 1 + binary_tree_height(tree->left);
	if (tree->right)
		rightheight = 1 + binary_tree_height(tree->right);

	if (leftheight >= rightheight)
		return (leftheight);
	else
		return (rightheight);
}
