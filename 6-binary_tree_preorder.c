#include "binary_trees.h"
/**
 * binary_tree_preorder - function that
 * goes through a binary tree using pre-order traversal
 * @tree: a pointer to the node to check
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter
 * to this function.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
	{
		return;
	}
	/*print data in root first then in current nodes*/
	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
