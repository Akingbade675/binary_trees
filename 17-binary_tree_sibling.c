#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling node
 * If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		binary_tree_t *parent;

		parent = node->parent;
		if (parent->left == node && parent->right)
			return (parent->right);
		else if (parent->right == node && parent->left)
			return (parent->left);
		else
			return (NULL);
	}
	return (NULL);
}
