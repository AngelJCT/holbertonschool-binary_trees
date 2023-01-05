#include "binary_trees.h"
/**
 *binary_tree_inorder-function to traverse using in-order traversal
 *@tree: pointer to root node
 *@func: pointer to function to call each node
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/*call itself recursively on the left children and all its descendants, using the same in-order traversal*/
	binary_tree_inorder(tree->left, func);

	/*call func on the value of the current node*/
	func(tree->n);

	/*call itself recursively on the right children and all its descendants, using the same in-order traversal*/
	binary_tree_inorder(tree->right, func);

	/*In-order traversal is a type of tree traversal that visits the left child of the current node, the current node, and then the right child of the current node, until all the nodes have been visited.*/
}
