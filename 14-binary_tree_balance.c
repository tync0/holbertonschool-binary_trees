#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures that balance factor of a tree
 * @tree: pointer to the root node
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the node of the tree to measure the height
 * Return: Return 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	if (tree == NULL)
		return (0);
	leftHeight = binary_tree_height(tree->left) + 1;
	rightHeight = binary_tree_height(tree->right) + 1;
	if (leftHeight > rightHeight)
		return (leftHeight);
	else
		return (rightHeight);
}
