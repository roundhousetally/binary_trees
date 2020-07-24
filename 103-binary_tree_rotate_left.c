#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotate btree left
 * @tree: root of the btree to rotate
 *
 * Return: new root OR original root on failure
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *new_root;

if (tree == NULL || tree->right == NULL)
return (tree);

new_root = tree->right;
new_root->parent = tree->parent;
tree->parent = new_root;
tree->right = new_root->left;

if (tree->right)
tree->right->parent = tree;

new_root->left = tree;
return (tree->parent);
}
