#include "binary_trees.h"

/**
 * binary_tree_size - Print the size binary tree.
 * @tree: Tree to print size.
 * Return: Depth
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree != NULL)
	{
		size =  binary_tree_size(tree->left) + 1 +
			binary_tree_size(tree->right);
	}

	return (size);

}
