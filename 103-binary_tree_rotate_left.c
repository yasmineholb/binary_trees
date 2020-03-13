#include "binary_trees.h"
/**
*binary_tree_rotate_left - function that performs a left-rotation on a b tree
*@tree: pointer to the root node of the tree to rotate
*Return: pointer to the new root node of the tree once rotated
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *tmp;
if (tree == NULL)
return (NULL);
if (tree->right == NULL)
return (NULL);
tmp = tree->right;
tree->parent = tmp;
tree->right = tmp->left;
if (tmp->left)
{
tmp->left->parent = tree;
}
tmp->left = tree;
tmp->left->parent = tmp;
tmp->parent = NULL;
return (tmp);
}
