#include "binary_trees.h"
#include <stdbool.h>
#include <stdint.h>
/**
 *binary_tree_levelorder-function to use level-order traversal
 *@tree: pointer to root node
 *@func: pointer to function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int i, h = binary_tree_height(tree);

	if (tree == NULL || func == NULL)
		return;

	for (i = 0; i <= h; i++)
		print_level(tree, i, func);
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
 * print_level-function to print nodes at given level
 * @tree: pointer to root node
 * @level:level to print
 * @func: pointer to function to call for each node
 */
void print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	//This function recursively traverse the tree in a level by level fashion and call the callback function when the current level matches the level passed as parameter.
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->right, level - 1, func);
	}
}
