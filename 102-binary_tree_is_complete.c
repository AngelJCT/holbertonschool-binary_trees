#include "binary_trees.h"
/**
 *binary_tree_is_complete-check if a binary tree is complete
 *@tree:pointer to root node
 *Return: true if its complete, false otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int h, n;

	if (tree == NULL)
		return (0);

	h = binary_tree_height(tree);
	n = countNodes(tree);

	return ((1 << h) - 1 == n);
}
/**
 *binary_tree_height-function to measure the height of a binary tree
 *@tree: pointer to root node
 *Return: the height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	else
	{
		return (right_height + 1);
	}
}
/**
 * countNodes-count the nodes in a tree
 * @tree: pointer to root node
 * Return: nodes count
 */
int countNodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + countNodes(tree->left) + countNodes(tree->right));
}
