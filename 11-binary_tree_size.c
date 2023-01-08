#include "binary_trees.h"
/**
 *binary_tree_size-function to measure the size of a tree
 *@tree: pointer to the root node
 *Return: size of the tree
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
