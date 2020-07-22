#include "binary_trees.h"

/**
 *binary_tree_nodes - counts the nodes
 *@tree: the tree to check
 *Return: the number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	node = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (node + 1);
}
