#include "binary_trees.h"

/**
 * binary_tree_uncle - find the sibling of the parent of node
 * @node: node to unclefy
 *
 * Return: uncle or NULL on failure states
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node == NULL)
		return (NULL);

	temp = node->parent;

	return (binary_tree_sibling(temp));
}

/**
 *binary_tree_sibling - checks if node is sibling
 *@node: to check
 *Return: 1 or 0
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	binary_tree_t *temp;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	temp = node->parent;

	if (temp->left == node)
		return (temp->right);

	return (temp->left);
}
