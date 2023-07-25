#include <iostream>
using namespace std;

class Queue
{
private:
    int *a;
    int front;
    int rear;
    int n;

public:
    Queue()
    {
        n = 10;
        front = -1;
        rear = -1;
        a = new int[n];
    }

    Queue(int n)
    {
        this->n = n;
        front = -1;
        rear = -1;
        a = new int[n];
    }

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
            cout << a[i] << " ";
        }
        cout << endl;
    }

    int QueueSize()
    {
        return rear - front;
    }

    int frontElement()
    {
        return a[front + 1];
    }
};

int main()
{
    int n;
    cout << "Size of Queue : ";
    cin >> n;

    Queue *Q = new Queue(n);
    Q->enQueue(10);
    Q->enQueue(20);
    Q->enQueue(30);
    Q->enQueue(40);
    Q->enQueue(50);
    Q->enQueue(60);
    Q->deQueue();
    Q->deQueue();

    Q->printQueue();
    cout << "Front Element is : " << Q->frontElement() << endl;
    cout << "Queue Size : " << Q->QueueSize() << endl;
    return 0;
}
