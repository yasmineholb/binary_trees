#include "binary_trees.h"
/**
*binary_tree_is_bst -  function that checks if a binary tree is a valid
*@tree: pointer to the root node of the tree to check
*Return: return 1 if tree is a valid BST, and 0 otherwise
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
int m, n;
if (tree == NULL)
return (0);
if (tree->n > tree->left->n && tree->right->n > tree->n)
return (1);
else
return (0);
m = binary_tree_is_bst(tree->right);
n = binary_tree_is_bst(tree->left);
if (m == 0 && n == 0)
return (0);
}
