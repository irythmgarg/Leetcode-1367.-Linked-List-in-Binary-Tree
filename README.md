# Leetcode-1367.-Linked-List-in-Binary-Tree
# 🔗 Linked List in Binary Tree

## 📘 Problem Statement

Given a binary tree `root` and a linked list `head`, determine if there exists a downward path in the binary tree such that the values along the path match the linked list.

A downward path starts at any node and goes downwards (to left or right children).

---

## 🧠 Approach Explanation

1. 🚀 **Recursive Traversal**:

   * Traverse every node in the binary tree using DFS.
   * At each node, check if a downward path from this node matches the linked list.

2. 🔎 **Path Matching (Helper Function)**:

   * Recursively match each list node to the current tree node.
   * Move to left or right subtree accordingly.
   * Return true if the entire list is matched.

3. 🛑 **Base Conditions**:

   * If `head` becomes null → success.
   * If tree node becomes null before the list ends → failure.

---

## 🧪 Example

```
Linked List: 4 -> 2 -> 8

Binary Tree:
       1
      / \
     4   4
    /     \
   2       2
  /         \
 1           8

✅ Output: True (Path: 4 -> 2 -> 8 exists)
```

---

## ⏱️ Time Complexity

* **O(N \* M)** where:

  * `N` is the number of nodes in the binary tree
  * `M` is the number of nodes in the linked list

## 💾 Space Complexity

* **O(H)** where `H` is the height of the tree (due to recursion stack)

---

## 🧑‍💻 Author Info

**👨‍🎓 Ridham Garg**
🚀 B.Tech Computer Engineering, Thapar University, Patiala
📧 *[ridhamgarg@000@gmail.com](mailto:ridhamgarg@000@gmail.com)*

---

## 🌟 Made with ❤️ using recursion and C++!
