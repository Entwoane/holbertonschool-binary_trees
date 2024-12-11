#include "binary_trees.h"
/**
 * binary_tree_sibling - Function where the node find the sibling
 * @node: Pointer to the node to find the sibling
 * Return: a pointer to the sibling node or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	if (node->parent->right == node)
		return (node->parent->left);

	return (NULL);
}
