#include "binary_trees.h"
/**
* binary_tree_is_full - function that checks if a binary tree is full
* @tree: pointer to the given tree
* Return: int
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
if (!tree)
return (0);
if (!tree->left && !tree->right)
return (1);
if (tree->left && tree->right)
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
return (0);
}
