#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: parnt of the node to create
 * @value: value to store in new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) 
{
binary_tree_t* newnode = malloc(sizeof(binary_tree_t));
    if (newnode != NULL)
    {
        newnode->parent = parent;
        newnode->left=NULL;
        newnode->right=NULL;
        newnode->n=value;
    }
    return newnode;
}
