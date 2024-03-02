#include "binary_trees.h"
/**
 * binary_tree_levelorder - a binary tree using levelorder traversal
 * @tree: the root node of the tree
 * @func: function to be called on each node
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
        if (!tree || !func)
                return;
        int i = 0, j = 0;
        binary_tree_t **mycol;

        mycol = (binary_tree_t **)malloc(sizeof(binary_tree_t));
        if (mycol == NULL)
                return NULL;
        mycol[j++] = tree;
        while(i < j)
        {
                binary_tree_t *temp = mycol[i++];
                func(temp->n);
                if (temp->left)
                        mycol[j++] = temp->left;
                if (tree->right)
                        mycol[j++] = temp->right;
