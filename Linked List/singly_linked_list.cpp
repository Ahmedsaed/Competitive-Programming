#include<iostream>

using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int val) {
        this -> val = val;
        this -> next = NULL;
    }
};

void print_list(Node* head) {
    struct Node* pCrawl = head;

    while (pCrawl != NULL) {
        cout << (pCrawl -> val) << " -> ";
        pCrawl = pCrawl -> next;
    }
    cout << "END\n";
}

void insert_at_head(Node* &head, int val) {
    if (head == NULL) {     // Empty List
        head = new Node(val);
        return;
    }
    Node* newNode = new Node(val);  
    newNode -> next = head;        
    head = newNode;                 
}

void insert_at_position(Node* &head, int val, int pos) {
    struct Node* pCrawl = head;
    for (int i = 0; i < pos - 1; i++)
        pCrawl =  pCrawl -> next;

    Node *A = pCrawl;
    Node *B = pCrawl->next;
    Node* C = new Node(val);
    A -> next = C;
    C -> next = B;
}

void insert_at_end(Node* &head, int val) {
    // List is empty
    if (head == NULL) {   
        head = new Node(val);
        return ;
    } 
    struct Node* pCrawl = head;
    while(pCrawl->next != NULL) { // iterate to last node
        pCrawl =  pCrawl -> next;
    }
    pCrawl -> next = new Node(val);
}

// Time complexity: O(N)
bool search(Node* &head, int val) {
    struct Node* pCrawl = head;
    while (pCrawl != NULL) {
        if(pCrawl -> val == val)
            return true;
        pCrawl = pCrawl -> next;
    }
    return false;
}

void delete_head(Node* &head) {
    Node* temp = head;
    head = head->next;
    delete temp;
}

// Time complexity: O(N)
void delete_at_position(Node* &head, int pos) {
    struct Node* A = head;
    for (int i = 0; i < pos - 1; i++) {
        A =  A->next;
    }
    Node *C = A->next;
    Node *B = A->next->next;
    A->next = B;
    delete C;
}

int main() {
    Node* head = NULL;
    
    cout << boolalpha;

    insert_at_head(head, 4); print_list(head);
    insert_at_head(head, 1); print_list(head);

    insert_at_position(head, 2, 1); print_list(head);
    insert_at_position(head, 3, 2); print_list(head);

    insert_at_end(head, 9); print_list(head);
    insert_at_end(head, 12); print_list(head);

    cout << "Searching for 9: " << search(head, 9) << "\n";
    cout << "Searching for 5: " << search(head, 5) << "\n";
    
    delete_head(head); print_list(head);
    delete_at_position(head, 3); print_list(head);
}
