#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 *
 * Return: depth, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t d = 0;
		binary_tree_t *node;

		node = tree->parent;
		while (node)
		{
			d++;
			node = node->parent;
		}

		return (d);
	}
	return (0);
}
