#include "binary_trees.h"

/**
 * binary_tree_uncle - find the sibling of the parent of node
 * @node: node to unclefy
 *
 * Return: uncle or NULL on failure states
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *temp = node->parent;
if (node == NULL)
return (NULL);

return (binary_tree_sibling(temp));

}

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

