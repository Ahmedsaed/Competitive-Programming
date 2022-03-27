#include <iostream>

using namespace std;

struct Node {
    int val;
    Node *left, *right;

    Node(int val){
        this -> val = val;
        this -> left = NULL;
        this -> right = NULL;
    }
};

struct Node* search(struct Node* pCrawl, int key) { 
    // Base Cases
    if (pCrawl == NULL || pCrawl->val == key) 
        return pCrawl; 
      
    if (pCrawl->val < key) 
        return search(pCrawl->right, key); 
    else 
        return search(pCrawl->left, key); 
}

void insert(struct Node* &root, int val) { 
    if (root == NULL) {
        root = new Node(val);
        return;
    }

    Node* pCrawl = root;
    Node* pCrawlParent;
    while(pCrawl) {
        pCrawlParent = pCrawl;

        if (val < pCrawl->val)
            pCrawl = pCrawl->left;
        else 
            pCrawl = pCrawl->right;
    }  

    if (val < pCrawlParent->val)
        pCrawlParent->left = new Node(val);
    else
        pCrawlParent->right = new Node(val);
} 

void in_order(struct Node* node)  { 
    if (node == NULL) 
        return; 
  
    in_order(node -> left); 
    cout << node -> val << " "; 
    in_order(node -> right); 
}

struct Node* min_value_node(struct Node* node) { 
    struct Node* pCrawl = node; 
  
    while (pCrawl->left != NULL) 
        pCrawl = pCrawl->left; 
  
    return pCrawl; 
} 

struct Node* max_value_node(struct Node* node) { 
    struct Node* pCrawl = node; 
  
    while (pCrawl->right != NULL) 
        pCrawl = pCrawl->right; 
  
    return pCrawl; 
} 

Node* delete_node(struct Node* root, int val) {
    if (root == NULL) return root; 

    if (val < root->val) // The key to be deleted is in the left subtree 
        root->left = delete_node(root->left, val); 

    else if (val > root->val) // The key to be deleted is in the right subtree 
        root->right = delete_node(root->right, val); 
    
    else {  // The current node is to be deleted
        if (root->left == NULL && root->right == NULL) { // Node is a leaf
            // Returning null here will make the parent's pointer to this node null
            // effectively removing this node from the tree
            return NULL; 
        } 
        else if (root->right == NULL) {  // Node has only one child
            // Parent's pointer to this node is replaced with left child of this node 
            return root->left; 
        } 
        else if (root->left == NULL) {  // Node has only one child
            // Parent's pointer to this node is replaced with right child of this node 
            return root->right; 
        } 
        else { // Node has two children
            // Find minimum value in the right subtree (in-order successor)
            // Copy to this node
            // Delete the in-order successor
            struct Node* temp = min_value_node(root->right);
            root->val = temp->val; 
            root->right = delete_node(root->right, temp->val); 
        }
    } 
    return root; 
}

int main() {
    Node* root1 = NULL;
    insert(root1, 5); insert(root1, 2); insert(root1, 7);
    insert(root1, 1); insert(root1, 3);
    in_order(root1); cout << "\n";
    delete_node(root1, 3);
    in_order(root1); cout << "\n\n";


    // Creating the same tree as in the illustration above for Case 2
    Node* root2 = NULL;
    insert(root2, 5);insert(root2, 2);insert(root2, 6);
    insert(root2, 1);insert(root2, 3);insert(root2, 7);
    insert(root2, 8);
    in_order(root2); cout << "\n";
    delete_node(root2, 6);
    in_order(root2); cout << "\n\n";


    // Creating the same tree as in the illustration above for Case 3
    Node* root3 = NULL;
    insert(root3, 5);insert(root3, 3);insert(root3, 7);
    insert(root3, 1);insert(root3, 6);insert(root3, 8);
    insert(root3, 9);
    in_order(root3); cout << "\n";
    delete_node(root3, 7);
    in_order(root3); cout << "\n\n";

    Node* item = search(root3, 8);
    cout << item->val << endl;

    return 0;
}