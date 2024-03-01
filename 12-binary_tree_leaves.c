#include "binary_trees.h"
/**
 * binary_tree_leaves - count the leaves of the tree
 * @tree: Pointer to the root node of the tree
 * Return: leaves of the tree, 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves, l_right, l_left;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right === NULL)
		return (1);;
	l_left = binary_tree_leaves(tree->left);
	l_right = binary_tree_leaves(tree->right);
	leaves =  l_left + l_right 
	return (leaves);
}
