#include "binary_trees.h"

/**
 * binary_tree_preorder - print tree in preorder.
 * @tree: Pointer to root node of tree to traverse.
 * @func: Pointer to function to call each node.
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}

}
