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
return (n);
}

#include "binary_trees.h"
/**
*binary_tree_height -  function that measures the height of a binary tree
*@tree: a pointer to the root node
*Return: height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t lf, rt;
if (tree == NULL)
return (-1);
lf = 0;
rt = 0;
if (tree->left)
lf = 1 + binary_tree_height(tree->left);
if (tree->right)
rt = 1 + binary_tree_height(tree->right);
if (lf >= rt)
{
return (lf);
}
else
{
return (rt);
}
}
