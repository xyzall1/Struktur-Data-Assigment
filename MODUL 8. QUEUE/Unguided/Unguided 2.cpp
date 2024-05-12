#include <iostream>

using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
};

struct Node {
    Mahasiswa data;
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

void enqueueAntrian(Mahasiswa data) {
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
    cout << "Data antrian mahasiswa: " << endl;
    while (temp != nullptr) {
        cout << "Nama = " << temp->data.nama << ", NIM = " << temp->data.nim << endl;
        temp = temp->next;
        i++;
    }
    cout << "Jumlah antrian = " << countQueue() << endl;
}

int main() {
    Mahasiswa mahasiswa1 = {"Aliana", "2311110008"};
    Mahasiswa mahasiswa2 = {"Sawafi", "2311110009"};

    enqueueAntrian(mahasiswa1);
    enqueueAntrian(mahasiswa2);
    viewQueue();
    dequeueAntrian();
    viewQueue();
    dequeueAntrian();
    viewQueue();
    return 0;
}