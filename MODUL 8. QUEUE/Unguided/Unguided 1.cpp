#include <iostream>

using namespace std;

struct Node {
    string data;
    Node* next;
};

Node* front = nullptr;
Node* back = nullptr;
int count = 0;

const int maksimalQueue = 5;

bool isFull() {
    return count == maksimalQueue;
}

bool isEmpty() {
    return count == 0;
}

void enqueueAntrian(string data) {
    if (isFull()) {
        cout << "Antrian Penuh" << endl;
    } else {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = nullptr;
        if (isEmpty()) {
            front = newNode;
            back = newNode;
        } else {
            back->next = newNode;
            back = newNode;
        }
        count++;
    }
}

void dequeueAntrian() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        Node* temp = front;
        front = front->next;
        delete temp;
        count--;
        if (isEmpty()) {
            back = nullptr;
        }
    }
}

int countQueue() {
    return count;
}

void clearQueue() {
    while (!isEmpty()) {
        dequeueAntrian();
    }
}

void viewQueue() {
    Node* temp = front;
    int i = 1;
    cout << "Data antrian teller: " << endl;
    while (temp != nullptr) {
        cout << i << ". " << temp->data << endl;
        temp = temp->next;
        i++;
    }
}

int main() {
    enqueueAntrian("Aliana");
    enqueueAntrian("Sawafi");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}