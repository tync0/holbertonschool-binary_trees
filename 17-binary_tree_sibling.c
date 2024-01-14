#include "binary_trees.h"
/**
 * binary_tree_sibling - function that find the sibling ot given node
 * @node: node to find sibling
 * Return: the sibling or NULL if node or parent is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
