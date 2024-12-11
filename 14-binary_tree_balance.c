#include "binary_trees.h"
/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: Pointer to the root of the tree
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0;
	size_t rightHeight = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
		leftHeight = 1 + binary_tree_height(tree->left);


	if (tree->right)
		rightHeight = 1 + binary_tree_height(tree->right);

	if (leftHeight > rightHeight)
		return (leftHeight);
	else
		return (rightHeight);
}

/**
 * binary_tree_balance - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	return (0);

	if (tree->left)
	left_height = binary_tree_height(tree->left);
	else
	left_height = -1;

	if (tree->right)
	right_height = binary_tree_height(tree->right);
	else
	right_height = -1;

	return (left_height - right_height);
}
