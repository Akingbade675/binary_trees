#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure size
 *
 * Return: the size of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
	{
		size_t sum = 1;
		tree->left ? sum += binary_tree_size(tree->left) : 0;
		tree->right ? sum += binary_tree_size(tree->right) : 0;

		return (sum);
	}
	return (0);
}
