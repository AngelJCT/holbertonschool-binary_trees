#include "binary_trees.h"
/**
 *binary_tree_is_perfect-check if a binary tree is perfect
 *@tree: pointer to root node
 *Return: true if is perfect, false otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, num_nodes;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	num_nodes = binary_tree_size(tree);

	//this expression returns 1 if the number of nodes in the tree
	//num_nodes is equal to 2^height - 1, return 1 if they are equal and 0 otherwise.
	return (num_nodes == (1 << height) - 1); //^ means exponentiation
}
/**
 *binary_tree_height-measure the height of a tree
 *@tree: pointer to root node
 *Return: height of tree
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
 *binary_tree_size-measure the size of a tree
 *@tree: pointer to root node
 *Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
