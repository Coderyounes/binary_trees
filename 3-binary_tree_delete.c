#include "binary_trees.h"

/**
 * binary_tree_delete - freeing trees
 * @tree: pointer to tree
 * Description: freeing Code traverse the list recursivly & freeing memory
 * until the tree become NULL
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
