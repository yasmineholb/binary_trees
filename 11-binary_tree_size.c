#include "binary_trees.h"
/**
*binary_tree_size - function that measures the size of a binary tree
*@tree: pointer to the root node of the tree to measure the size
*Return: size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t x;
if (tree == NULL)
return (0);
else
x = binary_tree_size(tree->right) + 1 + binary_tree_size(tree->left);
return (x);
}
