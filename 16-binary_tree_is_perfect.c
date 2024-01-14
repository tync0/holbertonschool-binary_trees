#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: is a pointer to the root node
 * Return: 1 if perfect 0 is not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size;

	if (tree == NULL)
		return (0);
	size = binary_tree_size(tree);
	height = binary_tree_height(tree);
	return (size == (1 << height) - 1);
}
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the node of the tree to measure the height
 * Return: Return 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);
	leftHeight = binary_tree_height(tree->left) + 1;
	rightHeight = binary_tree_height(tree->right) + 1;
	if (leftHeight > rightHeight)
		return (leftHeight);
	else
		return (rightHeight);
}
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root or the tree
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
