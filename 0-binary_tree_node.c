#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent of the node to create
 * @value: value to put in the new node
 *
 * Return: Pointer to the new node on success
 * Return NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent == NULL)
		return (newNode);

	newNode->parent = parent;
	if (parent->left == NULL)
		parent->left = newNode;
	else
		parent->right = newNode;

	return (newNode);

}
