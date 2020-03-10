#include "binary_trees.h"
/**
*binary_tree_insert_left - a function that inserts a node
*@parent: is a pointer to the node to insert the left-child in
*@value: is the value to store in the new node
*Return: return a pointer to the created node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *newnode;
binary_tree_t *tmp;
if (parent == NULL)
{
return (NULL);
}
newnode = malloc(sizeof(binary_tree_t));
if (!newnode)
{
return (NULL);
}
newnode->n = value;
newnode->parent = parent;
newnode->right = NULL;
if (parent->left == NULL)
parent->left = newnode;
else
{
tmp = parent->left;
parent->left->parent = newnode;
parent->left = newnode;
newnode->left = tmp;
}
return (newnode);
}
