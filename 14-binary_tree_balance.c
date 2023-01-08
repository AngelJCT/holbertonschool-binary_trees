#include "binary_trees.h"
/**
 *binary_tree_balance-measure balance factor in a tree
 *@tree: pointer to root node
 *Return: balance of binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = 1 + binary_tree_balance(tree->left);

	if (tree->right != NULL)
		right = 1 + binary_tree_balance(tree->right);

	return (left - right);
}
