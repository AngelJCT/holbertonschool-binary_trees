#include "binary_trees.h"
/**
 *binary_tree_uncle-find the uncle of a node
 *@node: pointer to node to find
 *Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/*
	 * Check if the parent of the node is the left or right child of its parent.
	 * If the parent of the node is the left child, the uncle is the right child,
	 * and vice versa.
	 */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
