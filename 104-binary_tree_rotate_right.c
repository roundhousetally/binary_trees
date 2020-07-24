#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotate the btree
 * @tree: root of btree to rotate
 *
 * Return: root of new rotated btree
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
binary_tree_t *new_root;

if (tree == NULL || tree->left == NULL)
return (tree);

new_root = tree->left;
new_root->parent = tree->parent;
tree->parent = new_root;
tree->left = new_root->right;

if (tree->left)
tree->left->parent = tree;

new_root->right = tree;
return (tree->parent);
}
