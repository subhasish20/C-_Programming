#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {
    // Declare a queue of integers
    queue<int> q;

    // Enqueue elements
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Queue front: " << q.front() << endl;
    cout << "Queue back : " << q.back() << endl;

    // Dequeue one element
    q.pop();

    cout << "Queue after one pop:" << endl;
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // Declare a stack of integers
    stack<int> s;

    // Push elements
    s.push(100);
    s.push(200);
    s.push(300);

    cout << "Stack top: " << s.top() << endl;

    // Pop one element
    s.pop();

    cout << "Stack after one pop:" << endl;
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
