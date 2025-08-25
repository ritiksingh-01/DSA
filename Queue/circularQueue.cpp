#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int front, rear, size;

public:
    Queue(int n)
    {
        arr = new int[n];
        size = n;
        front = rear = -1;
    }
    bool isEmpty()
    {
        return front == -1;
    }
    bool isFull()
    {
        return (rear + 1) % size == front;
    }
    void push(int x)
    {
        if (isEmpty())
        {
            cout << "Pushed " << x << " into the Queue." << endl;
            front = rear = 0;
            arr[rear] = x;
        }
        else if (isFull())
        {
            cout << "Queue overfull" << endl;
            return;
        }
        else
        {
            rear = (rear + 1) % size;
            arr[rear] = x;
            cout << "Pushed " << x << " into the Queue." << endl;
        }
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue underflow" << endl;
            return;
        }
        else
        {
            if (front == rear)
            {
                cout << "Pop " << arr[front] << " from the Queue." << endl;
                front = rear = -1;
            }
            else
            {
                cout << "Pop " << arr[front] << " from the Queue." << endl;
                front = (front + 1) % size;
            }
        }
    }
    int start()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
    void print()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Elements inside the queue are: ";
        int i = front;
        while (true)
        {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};

int main()
{

    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();
    q.push(4);
    q.pop();
    q.pop();
    q.push(5);
    q.print();
    q.push(6);
    q.push(7);
    q.push(8);
    q.pop();
    q.push(9);
    cout << q.start() << endl;
    q.print();

    return 0;
}