#include "binary_trees.h"

/**
 *binary_tree_height - height of binary tree
 *@tree: tree to measure
 *Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0;
	size_t rheight = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	lheight = binary_tree_height(tree->left) + 1;
	rheight = binary_tree_height(tree->right) + 1;
	if (lheight > rheight)
		return (lheight);
	else
		return (rheight);
}
