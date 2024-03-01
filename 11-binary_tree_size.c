#include "binary_trees.h"
/**
 * binary_tree_size - measure the size of the tree
 * @tree: Pointer to the root node of the tree
 * Return: size of the tree, 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;;

	if (tree == NULL)
		return (0);
	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);
	size = 1 + size_left + size_right
	return (size);
}
