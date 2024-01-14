#include "binary_trees.h"
/**
 * binary_tree_uncle - find the uncle of a given node
 * @node: is a pointer to the node to find the uncle
 * Return: a pointer to the uncle node, NULL (node is null, uncle is null)
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
