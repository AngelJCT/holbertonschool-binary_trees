#include "binary_trees.h"
/**
 *binary_tree_is_root-function to check if a node is root
 *@node: pointer to node to check
 *Return: 1 if it is root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return(0);
}
