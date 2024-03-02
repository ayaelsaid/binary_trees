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
	left_height = 1 + binary_tree_height(tree->left);
	right_height = 1 + binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}

/**
 * binary_tree_is_perfect - check if tree is perfect
 * @tree: pointer to tree
 * Return: 1 or 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h_l, h_r;
	int left, right;

	if (tree == NULL)
		return (0);
	h_l = binary_tree_height(tree->left);
	h_r = binary_tree_height(tree->right);
	if (h_l != h_r)
		return (0);
	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);
	if (left != 0 && right != 0)
		return (1);
	else if (left == 0 && right == 0)
		return (1);
	else
		return (0);
}
