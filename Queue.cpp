#include<bits/stdc++.h>
using namespace std;

int *a;
int front = -1;
int rear = -1;
int n;

int isFull()
{
    return rear == n - 1 ? 1 : 0;
}

void enQueue(int data)
{
    if (!isFull())
    {
        a[++rear] = data;
    }
    else
    {
        cout << "Queue Full " << endl;
    }
}

int isEmpty()
{
    return front == rear ? 1 : 0;
}

void deQueue()
{
    if (!isEmpty())
    {
        front++;
    }
    else
    {
        cout << "Queue Empty" << endl;
    }
}

void printQueue()
{
    for (int i = front + 1; i <= rear; i++)
    {
        cout << a[i] << endl;
    }
}

int QueueSize()
{
    return rear - front;
}

int frontElement()
{
    return a[front + 1];
}

int main()
{
    cout << "Size of Queue : ";
    cin >> n;
    a = new int[n];

    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    enQueue(60);

    deQueue();
    deQueue();

    printQueue();
    cout << frontElement() << endl;
    cout << QueueSize() << endl;

    return 0;
}
