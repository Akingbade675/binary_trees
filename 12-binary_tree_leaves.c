#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: is a pointer to the node of tree to count the number of leaves
 *
 * Return: the size of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t sum = 0;

	sum += tree->left ? binary_tree_leaves(tree->left) : 0;
	sum += tree->right ? binary_tree_leaves(tree->right) : 0;
	if (!tree->left && !tree->right)
		sum++;

	return (sum);
}
