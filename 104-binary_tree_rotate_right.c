#include "binary_trees.h"
/**
*binary_tree_rotate_right - function that performs a right-rotation on a b tree
*@tree: pointer to the root node of the tree to rotate
*Return: pointer to the new root node of the tree once rotated
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
binary_tree_t *tmp;
if (tree == NULL)
return (NULL);
if (tree->left == NULL)
return (NULL);
tmp = tree->left;
tree->parent = tmp;
tree->left = tmp->right;
if (tmp->right)
{
tmp->right->parent = tree;
}
tmp->right = tree;
tmp->right->parent = tmp;
tmp->parent = NULL;
return (tmp);
}
