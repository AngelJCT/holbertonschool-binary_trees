#include "binary_trees.h"
/**
 *binary_tree_height-function to measure the height of a binary tree
 *@tree: pointer to root node
 *Return: the height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	/*base case to end the recursive calls when it reaches a NULL pointer*/
	if (tree == NULL)
		return (0);

	/*If its not NULL, the function calculates the height of the left subtree by calling itself recursively on the left cild of the current node, and adding 1 to the result to account for the current node.*/
	if (tree->left != NULL)
		left_height = binary_tree_height(tree->left) + 1;

	/*If its not NULL, the function calculates the height of the right subtree in the same way of the left subtree*/
	if (tree->right != NULL)
		right_height = binary_tree_height(tree->right) + 1;

	if (left_height > right_height)
	{
		return (left_height);
	}
	else
	{
		return (right_height);
	}
}
