#include "binary_trees.h"

/**
 *binary_tree_leaves - counts the leaves
 *@tree: the tree to check
 *Return: leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t oolong = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (oolong + 1);
	else
		return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
