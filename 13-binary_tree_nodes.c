#include "binary_trees.h"

/**
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
  size_t node = 0;
  
  if (tree == NULL || (tree->left == NULL && tree->right == NULL))
    return (0);
  else
    {
      node = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
      return (node + 1);
    }
}
