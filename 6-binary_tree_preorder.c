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

	/*call func on the value of the current node*/
	func(tree->n);

	/*call itself recursively on the left children and all its descendants, using the same pre-order traversal*/
	binary_tree_preorder(tree->left, func);

	/*call itself recursively on the right children and all its descendants, using the same pre-order traversal*/
	binary_tree_preorder(tree->right, func);

	/*The function will continue to call itself until it reaches a leaf node or an empty subtree(a NULL pointer. At that point, the function will start returning up tha call stack, and the traversal of the tree will be complete.*/

	/*this process continues until all nodes in the tree have been visited.*/
	/*Pre-order traversal is a type of tree traversal that visits the current node before its children.*/
	/*In this case, the function 'func' is called on the current node before the function calls itself
	 * recursively on the left and right children of the current node*/
}
