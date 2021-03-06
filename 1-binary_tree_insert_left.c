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
if (parent == NULL)
{
return (NULL);
}
newnode = malloc(sizeof(binary_tree_t));
if (!newnode)
{
return (NULL);
}
newnode->left = parent->left;
parent->left = newnode;
newnode->parent = parent;
newnode->n = value;
newnode->right = NULL;
if (newnode->left)
newnode->left->parent = newnode;
return (newnode);
}
