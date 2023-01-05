#include "binary_trees.h"
/**
 *binary_tree_postorder-function to traverse a tree using post-order traversal
 *@tree: pointer to root node
 *@func: pointer to a function to call for each node
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/**
	 * call itself recursively on the left children and all its descendants,
	 * using the same post-order traversal
	 */
	binary_tree_postorder(tree->left, func);

	/**
	 * call itself recursively on the right children and all its descendants,
	 * using the same post-order traversal
	 */
	binary_tree_postorder(tree->right, func);

	/**
	 * call func on the value of the current node
	 */
	func(tree->n);


	/**
	 * In post-order traversal, the root node is visted last. First we traverse
	 * the left subtree, then the right subtree and finally
	 * the root node.
	 */
}
