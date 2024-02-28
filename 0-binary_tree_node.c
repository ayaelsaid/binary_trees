#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * binary_tree_node - Write a function that creates a binary tree node
 * @parent: pointer to root of binary tree
 * @value: the date of root
 * Return: parent or NULL
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_parent = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);
	new_parent->parent = parent;
	new_parent->n = value;
	new_parent->left = NULL;
	new_parent->right = NULL;
	return (new_parent);
}
