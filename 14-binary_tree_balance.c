#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a tree.
 * @tree: Pointer to the root node of the tree
 * Return: Height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count1 = 0, count2 = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		count1 = binary_tree_height(tree->left) + 1;
	if (tree->right)
		count2 = binary_tree_height(tree->right) + 1;

	return ((count1 < count2) ? count2 : count1);
}

/**
 * binary_tree_balance - Function that measures the balance of a tree
 * @tree: Pointer to the root node of the tree to measure the balance
 * Return: Balance
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t count1 = 0, count2 = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		count1 = binary_tree_height(tree->left) + 1;
	if (tree->right)
		count2 = binary_tree_height(tree->right) + 1;

	return (count1 - count2);
}
