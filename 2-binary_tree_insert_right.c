#include "binary_trees.h"
/**
*binary_tree_insert_right - a function that inserts a node
*@parent: is a pointer to the node to insert the left-child in
*@value: is the value to store in the new node
*Return: return a pointer to the created node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
newnode->left = NULL;
if (parent->right == NULL)
parent->right = newnode;
else
{
tmp = parent->right;
parent->right->parent = newnode;
parent->right = newnode;
newnode->right = tmp;
}
return (newnode);
}
