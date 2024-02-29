#include "binary_trees.h"
/**
 * binary_tree_height - measure the height of the tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree, 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL)
		left_height = 0;
	else
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right == NULL)
		right_height = 0;
	else
		right_height = 1 + binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
