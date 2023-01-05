#include "binary_trees.h"
/**
 *binary_tree_preorder-function to traverse a binary tree using pre-order
 *@tree: pointer to the root node
 *@func: pointer to function to call for each node
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/*call func on the tree's data*/
	func(tree->n);

	/*traverse the left subtrees*/
	binary_tree_preorder(tree->left, func);

	/*traverse the right subtrees*/
	binary_tree_preorder(tree->right, func);
}
