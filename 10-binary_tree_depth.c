#include "binary_trees.h"
/**
 * binary_tree_depth - measure the depth of the tree
 * @tree: Pointer to the root node of the tree
 * Return: depth of the tree, 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	if (!tree->parent)
		depth = 0;
	else
		depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
