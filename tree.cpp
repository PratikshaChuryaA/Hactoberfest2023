#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int value) : val(value), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    Node* root;

    BinaryTree() : root(nullptr) {}

    ~BinaryTree() {
        clear(root);
    }

    void insert(int value) {
        if (!root) {
            root = new Node(value);
            return;
        }

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* current = q.front();
            q.pop();

            if (!current->left) {
                current->left = new Node(value);
                return;
            } else {
                q.push(current->left);
            }

            if (!current->right) {
                current->right = new Node(value);
                return;
            } else {
                q.push(current->right);
            }
        }
    }

    void breadthFirstTraversal() const {
        if (!root) return;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* current = q.front();
            cout << current->val << " ";
            q.pop();

            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
    }

    void preorderTraversal(Node* node) const {
        if (node) {
            cout << node->val << " ";
            preorderTraversal(node->left);
            preorderTraversal(node->right);
        }
    }

    void inorderTraversal(Node* node) const {
        if (node) {
            inorderTraversal(node->left);
            cout << node->val << " ";
            inorderTraversal(node->right);
        }
    }

    void postorderTraversal(Node* node) const {
        if (node) {
            postorderTraversal(node->left);
            postorderTraversal(node->right);
            cout << node->val << " ";
        }
    }

private:
    void clear(Node* node) {
        if (node) {
            clear(node->left);
            clear(node->right);
            delete node;
        }
    }
};

int main() {
    BinaryTree tree;
    int value;
    char choice;

    cout << "Enter the value of root node: ";
    cin >> value;
    tree.insert(value); // Insert root

    do {
        cout << "\n1. Insert\n2. Breadth First Traversal\n3. Preorder Traversal\n4. Inorder Traversal\n5. Postorder Traversal\n0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case '1':
            cout << "Enter the value to be inserted: ";
            cin >> value;
            tree.insert(value);
            break;
        case '2':
            cout << "Breadth First Traversal: ";
            tree.breadthFirstTraversal();
            cout << endl;
            break;
        case '3':
            cout << "Preorder Traversal: ";
            tree.preorderTraversal(tree.root);
            cout << endl;
            break;
        case '4':
            cout << "Inorder Traversal: ";
            tree.inorderTraversal(tree.root);
            cout << endl;
            break;
        case '5':
            cout << "Postorder Traversal: ";
            tree.postorderTraversal(tree.root);
            cout << endl;
            break;
        case '0':
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    } while (choice != '0');

    return 0;
}
