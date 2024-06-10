#include <iostream>
using namespace std;

struct TNode {
    int data;
    TNode *left;
    TNode *right;

    // constructor
    TNode(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void preOrder(TNode *node) {
    if (node!= NULL) {
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }
}

void inOrder(TNode *node) {
    if (node!= NULL) {
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }
}

void postOrder(TNode *node) {
    if (node!= NULL) {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
}

void displayChild(TNode *node, int target) {
    if (node!= NULL) {
        if (node->data == target) {
            if (node->left!= NULL) {
                cout << "Child: " << node->left->data << endl;
            }
            if (node->right!= NULL) {
                cout << "Child: " << node->right->data << endl;
            }
        } else {
            displayChild(node->left, target);
            displayChild(node->right, target);
        }
    }
}

void displayDescendant(TNode *node, int target) {
    if (node!= NULL) {
        if (node->data == target) {
            preOrder(node);
        } else {
            displayDescendant(node->left, target);
            displayDescendant(node->right, target);
        }
    }
}

int main() {
    TNode *root = NULL;

    int choice;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Input data tree" << endl;
        cout << "2. Tampilkan pre-order" << endl;
        cout << "3. Tampilkan in-order" << endl;
        cout << "4. Tampilkan post-order" << endl;
        cout << "5. Tampilkan child node" << endl;
        cout << "6. Tampilkan descendant node" << endl;
        cout << "7. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int data;
                cout << "Input data tree: ";
                cin >> data;
                if (root == NULL) {
                    root = new TNode(data);
                } else {
                    TNode *temp = root;
                    while (true) {
                        if (data < temp->data) {
                            if (temp->left == NULL) {
                                temp->left = new TNode(data);
                                break;
                            } else {
                                temp = temp->left;
                            }
                        } else {
                            if (temp->right == NULL) {
                                temp->right = new TNode(data);
                                break;
                            } else {
                                temp = temp->right;
                            }
                        }
                    }
                }
                break;
            }
            case 2:
                preOrder(root);
                cout << endl;
                break;
            case 3:
                inOrder(root);
                cout << endl;
                break;
            case 4:
                postOrder(root);
                cout << endl;
                break;
            case 5: {
                int target;
                cout << "Input node target: ";
                cin >> target;
                displayChild(root, target);
                break;
            }
            case 6: {
                int target;
                cout << "Input node target: ";
                cin >> target;
                displayDescendant(root, target);
                cout << endl;
                break;
            }
            case 7:
                return 0;
            default:
                cout << "Pilihan tidak valid" << endl;
        }
    }

    return 0;
}