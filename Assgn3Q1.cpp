#include <iostream>
using namespace std;

class Stack {
    int top;
    int size;
    int* arr;

public:
    // Default constructor
    Stack() {
        top = -1;
        size = 100;
        arr = new int[size];
    }

    // Parameterized constructor
    Stack(int size) {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    // Push operation
    void push(int value) {
        if (top == size - 1) {
            cout << "Stack Overflow." << endl;
        } else {
            arr[++top] = value;
        }
    }

    // Pop operation
    int pop() {
        if (top == -1) {
            cout << "Stack Underflow." << endl;
            return -1; // sentinel value
        } else {
            return arr[top--];
        }
    }

    // Check empty
    bool isEmpty() {
        return top == -1;
    }

    // Check full
    bool isFull() {
        return top == size - 1;
    }

    // Display elements
    void Display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor to free memory
    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack s(5); // stack of size 5

    s.push(10);
    s.push(20);
    s.push(30);

    s.Display();  // 10 20 30

    cout << "Popped: " << s.pop() << endl; // 30
    s.Display();  // 10 20

    cout << "Is Empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is Full? " << (s.isFull() ? "Yes" : "No") << endl;

    return 0;
}
