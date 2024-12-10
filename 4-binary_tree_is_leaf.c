#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: pointer to the parent node
 * @value: value to store in the new node
 * Return: return a pointer to the new node, or NULL on failure
 */

int binary_tree_is_leaf(const binary_tree_t *node)

{
	 if (node == NULL)
        return (0);

    return (node->left == NULL && node->right == NULL);
}
