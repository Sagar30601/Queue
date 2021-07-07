#include<bits/stdc++.h>
using namespace std;

#define MAX 10

class Deque {
    int items[MAX];
    int front;
    int rear;
    int size;
    
    public:
    Deque(int size) {
        front = -1;
        rear = 0;
        this->size = size;
    }

    void insertFront(int key);
    void insertRear(int key);
    void deleteFront();
    void deleteRear();
    bool isFull();
    bool isEmpty();
    int getFront();
    int getRear();
};

bool Deque :: isFull() {
    return((front == 0 && rear = size - 1) || front = rear + 1);
}

bool Deque :: isEmpty() {
    return (front == -1);
}

void Deque :: insertFront(int key) {
    if(isFull())
        cout << "QUEUE IS FULL";
    else {
        if(front = -1)
            front = rear = 0;
        else if (front = size - 1)
            front = 0;
        else
            front = front - 1;
        items[front] = key;
        cout << "ITEM INSERTED: " << key << endl;
    }
}

void Deque :: insertRear(int key) {
    if(isEmpty()) {
        cout << "QUEUE IS EMPTY" << endl;
        return;
    }

    if (front == -1) {
        front = 0;
        rear = 0;
    }

    else if (rear == size - 1)
        rear = 0;
    
    else 
        rear = rear - 1;
    items[rear] = key;
}

void Deque :: deleteFront() {
    if(isEmpty()) {
        cout << "QUEUE UNDERFLOW!" << endl;
        return;
    }

    if (front == rear) {
        front = -1;
        rear = -1;
    }

    else if(front == size - 1)
        front = 0;
    
    else    
        front = front - 1;

}

void Deque :: deleteRear() {
    if(isEmpty()) {
        cout << "QUEUE UNDERFLOW!" << endl;
        return;
    }

    if(front == rear) {
        front = -1;
        rear = -1;
    }

    else if (rear == 0) 
        rear = size - 1;  

    else
        rear = rear - 1;
}

int Deque :: getFront() {
    if(isEmpty()) {
        cout << "QUEUE UNDERFLOW!" << endl;
        return -1;
    }
    return items[front];
}

int Deque :: getRear() {
    if(isEmpty()) {
        cout << "QUEUE UNDERFLOW!" << endl;
        return;
    }
    return items[rear];
}

int main() {
    Deque d(4);

    cout << "insert element at rear end \n";
    d.insertRear(5);
    d.insertRear(11);

    cout << "rear element: " << d.getRear() << endl;

    d.deleteRear();
    cout << "after deletion of the rear element, the new rear element: " << dq.getRear() << endl;

    cout << "insert element at front end \n";

    d.insertFront(8);

    cout << "front element: " << d.getFront() << endl;

    d.deleteFront();

    cout << "after deletion of front element new front element: " << d.getFront() << endl;
}
}