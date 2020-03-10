#include "binary_trees.h"
/**
*binary_tree_balance - function that measures the balance factor of a b tree
*@tree: pointer to the root node of the tree to measure the balance f
*Return: BF
*/
int binary_tree_balance(const binary_tree_t *tree)
{
int n = 0;
if (tree == NULL)
return (0);
n = binary_tree_height(tree->left) - binary_tree_height(tree->right);
if (!(tree->left) && (tree->right))
n--;
return (n);
}
