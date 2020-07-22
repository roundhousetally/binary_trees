#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance factor
 * @tree: tree to balance
 *
 * Return: an integer that is the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (actual_balance(tree->left) - actual_balance(tree->right));
}

/**
 * actual_balance - does the grunt work
 * @tree: tree to balance
 *
 * Return: an integer that is a balance factor
 */

int actual_balance(const binary_tree_t *tree)
{
int left, right;

if (tree == NULL)
return (0);

left = 1 + actual_balance(tree->left);
right = 1 + actual_balance(tree->right);

if (left > right)
return (left);

return (right);
}
