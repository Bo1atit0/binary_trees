#include "binary_trees.h"

/**
 *
 *
 *
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode,*nnode;

    newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
    if (newnode == NULL)
    {
        return (NULL);
    }

    if (parent->left == NULL)
    {
        parent->left = newnode;
        newnode->right = NULL;
        newnode->left = NULL;
        newnode->n = value;
    }
    else
    {
        nnode = parent->left;
        parent->left = newnode;
        newnode->n = value;
        newnode->left = nnode;
        newnode->right = NULL;
    }

return (newnode);

}