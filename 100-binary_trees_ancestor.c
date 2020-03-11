#include "binary_trees.h"
/**
*binary_trees_ancestor -  finds the lowest common ancestor of two nodes
*@first: pointer to the first node
*@second: pointer to the second node
*Return: ancestor
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
binary_tree_t *p, *pp, *i, *j;
i = (binary_tree_t *)first;
j = (binary_tree_t *)second;
if (first == NULL || second == NULL)
return (NULL);
p = first->parent;
pp = second->parent;
if (second == first)
{
return ((binary_tree_t *)first);
}
if (p || pp)
{
if (binary_tree_depth(first) > binary_tree_depth(second))
{
while (binary_tree_depth(i) != binary_tree_depth(j))
{
i = i->parent;
}
}
else if (binary_tree_depth(first) < binary_tree_depth(second))
{
while (binary_tree_depth(i) != binary_tree_depth(j))
{
j = j->parent;
}
}
}
while (i && j)
{
if (i == j)
return (i);
i = i->parent;
j = j->parent;
}
return (NULL);
}

/**
*binary_tree_depth -  function that measures the depth of a node in a tree
*@tree: pointer to the node to measure the depth
*Return: depth
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
