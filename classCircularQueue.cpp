#include<bits/stdc++.h>
using namespace std;

#define SIZE 5
class Queue {
    private: 
        int items[SIZE], front, rear;
    public:
        Queue() {
            front = -1;
            rear = -1;
        }

    bool isFull() {
        if(front == 0 && rear == SIZE -1)
            return true;
        if (front == rear + 1)
            return true;
        else
            return false;
    }

    bool isEmpty() {
        if(front == -1)
            return 1;
        else
            return 0;
    }

    void Enqueue(int element) {
        if(isFull())
            cout << "QUEUE IS FULL" << endl;
        else {
            if(front == -1) 
                front = 0;
            rear = (rear + 1) % SIZE;  // % by size gives the remainder in circular also
            items[rear] = element;
            cout << "Inserted element is: " << element << endl;
        }
    }

    int Dequeue(){
        int ele;
        if(isEmpty()) {
            cout << "QUEUE IS EMPTY";
            return (-1);
        }
        else {
            ele = items[front];
            if (front == rear) {
                front = rear = -1;
            }
            else {
                front = (front + 1) % SIZE;
            }
            return (ele);
        }
    }

    void Display() {
        int i;
        if (isEmpty())
            cout << "QUEUE IS EMPTY" << endl;
        else {
            cout << "FRONT--> " << front << endl;
            for(i = front; i != rear; i = (i + 1) % SIZE)
                cout << items[i] << endl;
            cout << items[i] << endl;
            cout << "REAR--> " << rear << endl;
        }
    }
} q;

int main() {
    q.Display();

    for(int i = 0; i < 5; i++)
        q.Enqueue(i);

    q.Display();

    q.Enqueue(6);

    q.Dequeue();

    q.Display();

    q.Dequeue();

    q.Enqueue(7);

    q.Display();

}