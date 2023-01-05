#include "binary_trees.h"
/**
 *binary_tree_delete-function to delete a binary tree
 *@tree: pointer to the root node of the tree to delete
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	//call itself recursively on the left and right children of the current
	//node, and then frees the memory for the current node. This process continues
	//until all the nodes in the tree have been visited and freed.
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
