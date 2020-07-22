#include "binary_trees.h"

/**
 * binary_tree_sibling - find a sibling of a node
 * @node: node to find sibling of
 *
 * Return: pointer to sibling or NULL on failure states
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
binary_tree_t *temp = node->parent;

if (node == NULL || node->parent == NULL)
return (NULL);

if (temp->left && temp->right)
{
if (temp->left->n != node->n)
temp = temp->left;
else
temp = temp->right;
      
return (temp);
}
return (NULL);
}
