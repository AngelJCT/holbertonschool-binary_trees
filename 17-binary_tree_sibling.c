#include "binary_trees.h"
/**
 *binary_tree_sibling-find the sibling of a node
 *@node: pointer to root node
 *Return: pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
