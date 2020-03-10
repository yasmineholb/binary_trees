#include "binary_trees.h"
/**
*binary_tree_depth -  function that measures the depth of a node in a tree
*@tree: pointer to the node to measure the depth
*Return: the depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t rt;
if (tree == NULL)
return (0);
rt = 0;
if (tree->parent)
rt = 1 + binary_tree_depth(tree->parent);
return (rt);
}
