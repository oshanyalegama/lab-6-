/* C++ program to implement basic stack
   operations */
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <chrono>
using namespace std;
using namespace chrono;

//defining the size of the stack 
#define MAX 1000
  
class Stack {
    int top;
  
public:
    int a[MAX]; // Maximum size of Stack
  
    Stack() { top = -1; }
    bool Push(int x);
    int Pop();
    bool isEmpty();
    bool isFull();
    int StackTop();
    void Display();
};
  
bool Stack::Push(int x)
{
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        a[++top] = x;
        return true;
    }
}
  
int Stack::Pop()
{
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}
bool Stack::isEmpty()
{
    if (top <= 0) {
        cout << "Stack is Empty";
        return true;
    }
    else {
        return false;
    }
}
  
bool Stack::isFull()
{
    if (top < (MAX-1)){
        return false;
    }
    else{
        return true;
    }
}


int Stack::StackTop()
{
    if (top > -1){
        return a[top];
    }
    else{
        cout << "Stack is Empty";
        return -1;
    }
}

void Stack::Display()
{
    for (int i= 0; i<=top ; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}


// Driver program to test above functions
int main()
{
    auto start = high_resolution_clock::now();

    class Stack s;
    s.Push(8);
    s.Push(10);
    s.Push(5);
    s.Push(11);
    s.Push(15);
    s.Push(23);
    s.Push(6);
    s.Push(18);
    s.Push(20);
    s.Push(17);
    s.Display();
    s.Pop();
    s.Pop();
    s.Pop();
    s.Pop();
    s.Pop();
    s.Display();
    s.Push(4);
    s.Push(30);
    s.Push(3);
    s.Push(1);
    s.Display();

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken for Array Implementation" << " is " << duration.count() << " microseconds" << endl;

  
    return 0;
}