#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: tree to check
 *
 * Return: 1 on true, 0 on false or failure
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);
if (tree->left != NULL && tree->right != NULL)
return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));

return (0);
}


size_t depth(const binary_tree_t *tree)
{
  size_t depth = 0;
  while (tree != NULL)
    {
      depth++;
      tree = tree->left;
    }
  return depth;
}
