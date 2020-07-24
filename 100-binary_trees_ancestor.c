#include "binary_trees.h"
/**
 * binary_trees_ancestor - find lowest common ancestor
 * @first: first node to check
 * @second: second node to check
 *
 * Return: the ancestor or NULL on failure
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
size_t df, ds;

if (first == NULL || second == NULL)
return (NULL);

if (first == second)
return (first->left->parent);

df = depth(first);
ds = depth(second);

if (df < ds)
return (binary_trees_ancestor(first, second->parent));
else if (ds < df)
return (binary_trees_ancestor(first->parent, second));
else
return (binary_trees_ancestor(first->parent, second->parent));

}

/**
 * depth - finds depth of btree
 * @tree: binary tree
 *
 * Return: depth of binary tree or 0 if NULL
 */

size_t depth(const binary_tree_t *tree)
{
binary_tree_t *temp;
size_t counter = 1;

if (tree == NULL || tree->parent == NULL)
return (0);

temp = tree->parent;

while (temp->parent != NULL)
{
temp = temp->parent;
counter++;
}
return (counter);
}
