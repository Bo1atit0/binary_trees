#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures
 * the depth of a binary tree
 * @tree: a  pointer to the root node of
 * the tree to measure the depth
 * Return: 0 if tree is NULL else depth of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent == NULL)
	{
		return (depth);
	}
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
