#include<bits/stdc++.h>
using namespace std;

#define SIZE 5

class Queue{
    private: 
        int items[SIZE], front, rear;

    public:
        // Default kinda constructor created
        // front and rear values == -1
        Queue(){
            front = -1;
            rear = -1;
        }

        //Check whether queue is full
        bool isFull(){
            if(front == 0 && rear == SIZE - 1) {
                return 1;
            }
            else 
                return 0;
                
        }

        //check whether queue is empty
        bool isEmpty(){
            if(front == -1)
                return 1;
            else    
                return 0;               
        }

        //enqueue; adding an element in a queue
        void enqueue(int element) {
            if(isFull()) {
                cout << "QUEUE IS FULL" << endl;
            }
            else {
                if (front == -1 )
                    front = 0;
                rear++;
                items[rear] = element;
            }
        }

        //Dequeue; poopping an element from a queue
        void dequeue(){
            if(isEmpty()) {
                cout << "QUEUE IS EMPTY" << endl;
            }
            else {
                int element = items[front];     
                if(front >= rear) {             // reset to default 
                    front = rear = -1;
                }
                else {
                    front++;
                }
                cout << "Deleted item is: " << element << endl;
            }
        }

        //Printing the Queue
        void printQueue(){
            if(isEmpty()) 
                cout << "QUEUE IS EMPTY" << endl;
            else {
                cout << "FRONT INDEX --> " << front << endl;
                for(int i=front; i<=rear; i++ ) {
                    cout << items[i] << endl;
                }
                cout << "REAR INDEX --> " << rear << endl;
            }
        }
};

int main() {
    //Queue is created using made in constructor
    Queue q; 

    //printing the Queue
    q.printQueue();

    //Adding an element to queue
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.printQueue();

    //Dequeue
    q.dequeue();

    q.printQueue();

    q.dequeue();

    q.printQueue(); 
}