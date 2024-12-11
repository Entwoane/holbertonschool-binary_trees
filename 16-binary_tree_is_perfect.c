#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: Pointer to the root of the tree
 * Return: Height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)

{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
	{
		left = 1 + binary_tree_height(tree->left);
	}
	else
	{
		left = 0;
	}
	if (tree->right)
	{
		right = 1 + binary_tree_height(tree->right);
	}
	else
	{
		right = 0;
	}
	if (left > right)
	{
		return (left);
	}
	else
	{
		return (right);
	}
}

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: Size of the tree, 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)

{
	size_t size = 0;
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL)
		return (0);

	right = binary_tree_size(tree->right);
	left = binary_tree_size(tree->left);

	size = right + left + 1;

	return (size);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)

{
	int perfect;
	int size;
	int height;

	if (tree == NULL)
	{
		return (0);
	}
	size = (int)binary_tree_size(tree);
	height = binary_tree_height(tree);
	perfect = size == (2 << height) - 1;
	return (perfect);
}
