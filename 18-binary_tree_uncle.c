#include "binary_trees.h"
/**
*binary_tree_uncle -  function that finds the uncle of a node
*@node: pointer to the node to find the uncle
*Return: pointer to the uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *p, *pp;
if (node == NULL)
return (NULL);
p = node->parent;
if (p == NULL)
return (NULL);
pp = p->parent;
if (pp == NULL)
return (NULL);
if (p == pp->left)
return (pp->right);
else
return (pp->left);
}
