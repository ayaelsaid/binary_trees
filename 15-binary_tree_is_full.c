#include "binary_trees.h"
/**
 * binary_tree_is_full - check if tree is full
 * @tree: pointer to tree
 * Return: 1 or 0
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (left != 0 && right != 0)
		return (1);
	else if (left == 0 && right == 0)
		return (1);
	else
		return (0);
}
