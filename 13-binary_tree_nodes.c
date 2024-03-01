#include "binary_trees.h"
/**
 * binary_tree_nodes - count the nodes of the tree
 * @tree: Pointer to the root node of the tree
 * Return: nodes of the tree, 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->rigth)
		nodes = 1;
	else
		nodes = 0;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
