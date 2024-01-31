#include "binary_trees.h"

/**
 * binary_tree_insert_right -function that inserts a
 *  node as the right-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: newnode
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnode;

	if (parent == NULL)
	{
		return (NULL);
	}
	rightnode = malloc(sizeof(binary_tree_t));
	if (rightnode == NULL)
	{
		return (NULL);
	}

	rightnode->parent = parent;
	rightnode->n = value;
	rightnode->right = parent->right;
	rightnode->left = NULL;

	if (parent->right != NULL)
	{
		parent->right->parent = rightnode;
	}
	parent->right = rightnode;
	return (rightnode);
}
