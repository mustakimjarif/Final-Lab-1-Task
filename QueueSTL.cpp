#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Empty Queue
    queue<int> myqueue;
    myqueue.push(19);
    myqueue.push(20);
    myqueue.push(30);
    myqueue.push(36);

    myqueue.pop();

    // Printing content of queue
    while (!myqueue.empty()) {
        cout << " " << myqueue.front();
        myqueue.pop();
    }
}
