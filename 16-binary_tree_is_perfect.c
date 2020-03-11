#include "binary_trees.h"
/**
* depth_right - returns depth of right leaf
* @tree: tree to check
* Return: depth of leaf on the right
*/
int depth_right(const binary_tree_t *tree)
{
int depth = 0;
while (tree != NULL)
{
depth++;
tree = tree->right;
}
return (depth);
}
/**
* binary_tree_is_perfect - function that checks if a binary tree is perfect
* @tree: pointer to the root of the tree
* Return: 1 on success, 0 on failure
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (1);
}
