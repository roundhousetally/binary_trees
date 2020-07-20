#include "binary_trees.h"

/**
 *binary_tree_insert_left - inserts a node as the left child of another node
 *@parent: parent node
 *@value: data
 *Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left = newnode;
		newnode->left->parent = newnode;
	}
	else
	{
		parent->left = newnode;
	}
	return (newnode);
}
