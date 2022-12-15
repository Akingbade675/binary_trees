#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		int left, right;

		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		return (left - right);
	}
	return (0);
}
