#include "binary_trees.h"
#include <limits.h>
/**
 *binary_tree_is_bst-check if binary tree is a valid BST
 *@tree: pointer to root node
 *Return: 1 if its a BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_bst(tree, LONG_MIN, LONG_MAX));
}
/**
 *is_bst-function to check if the key values are in ascending order
 *@tree: pointer to root node
 *@min: minimum longer value
 *@max: maximum longer value
 *Return: true if the values are in ascending order, false otherwise
 */
int is_bst(const binary_tree_t *tree, long int min, long int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);

	return (is_bst(tree->left, min, tree->n) &&
			is_bst(tree->right, tree->n, max));
}
