#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert newnode at the left
 * @parent: the root of the left of parent's root
 * @value: int that stored in nodes
 * Return: NULL or new_left
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	if (parent == NULL)
		return (NULL);
	new_left = binary_tree_node(parent, value);

	if (new_left == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new_left->left = parent->left;
		parent->left->parent = new_left;
	}
	parent->left = new_left;
	return (new_left);
}
