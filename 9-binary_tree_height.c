#include "binary_trees.h"
/**
 * binary_tree_height - function that measures
 * the height of a binary tree
 * @tree: a  pointer to the root node of
 * the tree to measure the height
 * Return: 0 if tree is NULL else height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_tree, right_tree;

if (tree == NULL)
{
    return (0);
}

left_tree = binary_tree_height(tree->left) + 1;
right_tree = binary_tree_height(tree->right) + 1;

if (left_tree >= right_tree)
{
    return (left_tree) + 1;
}
else
{
    return (right_tree) + 1;
}

}