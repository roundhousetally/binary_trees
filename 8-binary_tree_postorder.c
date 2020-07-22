#include "binary_trees.h"

/**
 *binary_tree_postorder- inorder traversal
 *@tree: the tree to traverse
 *@func: void pointer to func
 *Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
