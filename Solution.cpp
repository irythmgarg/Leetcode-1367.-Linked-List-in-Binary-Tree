/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    // Checks if the linked list is a downward path starting from current tree node
    bool check(ListNode* head, TreeNode* node) {
        if (!head) return true;            // Reached end of the list -> valid match
        if (!node) return false;           // Reached end of tree path before list -> invalid
        if (head->val != node->val) return false; // Mismatch in values

        // Recursively check left and right subtree
        return check(head->next, node->left) || check(head->next, node->right);
    }

    // Traverses the tree to find starting point for list match
    bool isSubPath(ListNode* head, TreeNode* root) {
        if (!root) return false;                // Empty tree -> cannot match
        if (check(head, root)) return true;     // Match found starting at current node

        // Recur for left and right subtrees
        return isSubPath(head, root->left) || isSubPath(head, root->right);
    }
};
