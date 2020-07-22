#include "binary_trees.h"

/**
 *binary_tree_insert_right - inserts a node as the right child of another node
 *@parent: parent node
 *@value: data
 *Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = binary_tree_node(parent, value);


	if (parent == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right = newnode;
		newnode->right->parent = newnode;
	}
	else
	{
		parent->right = newnode;
	}
	return (newnode);
}
