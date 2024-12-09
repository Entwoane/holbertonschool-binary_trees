# Binary Trees

Binary Tree is a non-linear and hierarchical data structure where each node has at most two children referred to as the left child and the right child.  The topmost node in a binary tree is called the root, and the bottom-most nodes are called leaves.

![binary-tree](https://media.geeksforgeeks.org/wp-content/uploads/20240811023816/Introduction-to-Binary-Tree.webp)

## Representation of Binary Tree

Each node in a Binary Tree has three parts:

- Data
- Pointer to the left child
- Pointer to the right child

![binary-representation](https://media.geeksforgeeks.org/wp-content/uploads/20240811023858/Binary-Tree-Representation.webp)

## Data Structure used for this project

```c /**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

## Project Requirements

All your files will be compiled on Ubuntu 24.04 LTS using gcc, using the options **-Wall -Werror -Wextra -pedantic -std=gnu89**  
All your files should end with a new line  
A README.md file, at the root of the folder of the project, is mandatory  
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl  
You are not allowed to use global variables  
No more than 5 functions per file  
You are allowed to use the standard library  
The prototypes of all your functions should be included in your header file called ***binary_trees.h***  
All your header files should be include guarded  

## Project made in collaboration

- [Alexandre Mousse](https://github.com/Alex-git-pro)
- [Kevin Rouget](https://github.com/koryos77)
- [Antoine Musci](https://github.com/Entwoane)
