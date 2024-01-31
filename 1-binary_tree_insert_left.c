#include "binary_trees.h"

/**
 * binary_tree_insert_left -function that inserts a
 *  node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: newnode
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

    if (parent == NULL)
    {
        return (NULL);
    }

	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->parent = parent;
	newnode->right = NULL;
	newnode->left = parent->left;
	newnode->n = value;

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		newnode->parent = parent;
	}
	parent->left = newnode;
	return (newnode);

}
