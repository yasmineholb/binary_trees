#include "binary_trees.h"
/**
* binary_tree_is_complete - function that checks if a binary tree is complete
* @tree: pointer to the tree
* Return: 1 on success, 0 on failure
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if ((tree->left == NULL) && (tree->right))
return(0);
if ((tree->right == NULL) && (tree->left == NULL))
return (0);
else
return (1);
}
