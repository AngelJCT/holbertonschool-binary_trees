#include "binary_trees.h"
/**
 *binary_tree_rotate_right-function to perfom right-rotation
 *@tree: pointer to root node
 *Return: pointer to tree rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *newRoot = NULL;

	if (tree == NULL)
		return (NULL);

	if (tree != NULL && tree->left != NULL)
	{
		newRoot = tree->left;
		tree->left = newRoot->right;
		newRoot->right = tree;
	}
	return (newRoot);
}
