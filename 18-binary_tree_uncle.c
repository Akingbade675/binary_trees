#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node
 * If node is NULL, return NULL
 * If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent && node->parent->parent)
	{
		binary_tree_t *gparent;

		gparent = node->parent->parent;
		if (gparent->left == node->parent && gparent->right)
			return (gparent->right);
		else if (gparent->right == node->parent && gparent->left)
			return (gparent->left);
		else
			return (NULL);
	}
	return (NULL);
}
