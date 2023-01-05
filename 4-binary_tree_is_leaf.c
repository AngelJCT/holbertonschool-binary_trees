#include "binary_trees.h"
/**
 *binary_tree_is_leaf-function to check if a node is a leaf
 *@node: pointer to the node to check
 *Return: 1 if its a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*not a leaf if node is null*/
	if (node == NULL)
		return (0);

	/*leaf if no children*/
	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0); /*not a leaf if it has at least one child*/
}
