# Binary Tree

It's a hierarchical data structure

- The topmost node is called the root.
- Each node can have up to two children, hence the name Binary tree.
- The two children of a node are the left and right children.
- The node above a node is called its parent. Root has no parent.
- Nodes with no children are called leaves or external nodes.
- Non-Leaf nodes are called internal nodes.
- The number of levels is the height of the tree.
- Siblings: Nodes with the same parent.
- Descendant: Node reachable by traversing children (Nodes in the Subtree).
- Ancestor: Nodes reachable by traversing parents (Nodes on the path from the node to root).

## Types of binary tree

- Full binary tree  
    > Every node has either zero or two children
- Complete Binary Tree
    > All levels except the last level are completely filled
- Perfect Binary Tree
    > A binary tree where all internal nodes have two children and all leaves are at the same level

## Heap

Heap is a complete binary tree. There are two types of heaps
- Min Heap
- Max Heap

### Min Heap
In min-heap, each node is smaller than its children. This means the root has the smallest key among all the nodes.

### Max Heap
In min-heap, each node is greater than its children. This means the root has the greatest key among all the nodes.

### Properties
- Complete Binary Tree
- Root is minimum/maximum out of all the elements
- Height is O(logN)

## Binary Search Tree

A binary search tree is a node-based binary tree data structure.
For every node:
- The left subtree of a node contains only nodes with smaller keys.
- The right subtree of a node contains only nodes with larger keys.

### Properties
- Binary Tree
- All keys in the left subtree of X is < X
- All keys in the right subtree of X is > X
- Height is O(N)
