/* C++ program to implement basic stack
   operations */
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <chrono>
using namespace std;
using namespace chrono;
  
// creating a linked list;
class Node {
public:
    int data;
    Node* link;
    
    // Constructor
    Node(int n)
    {
        this->data = n;
        this->link = NULL;
    }
};
  
class Stack {
    Node* top;
  
public:
    Stack() { top = NULL; }
  
    void Push(int data)
    {
  
        // Create new node temp and allocate memory in heap
        Node* temp = new Node(data);
  
        // Check if stack (heap) is full.
        // Then inserting an element would
        // lead to stack overflow
        if (!temp) {
            cout << "\nStack Overflow";
            exit(1);
        }
  
        // Initialize data into temp data field
        temp->data = data;
  
        // Put top pointer reference into temp link
        temp->link = top;
  
        // Make temp as top of Stack
        top = temp;
    }
  
    // Utility function to check if
    // the stack is empty or not
    bool isEmpty()
    {
        // If top is NULL it means that
        // there are no elements are in stack
        return top == NULL;
    }
  
    // Utility function to return top element in a stack
    int StackTop()
    {
        // If stack is not empty , return the top element
        if (!isEmpty())
            return top->data;
        else
            exit(1);
    }

    bool isFull()
    {
        Node* temp;

        if (!temp){
            return true;
        }
        else{
            return false;
        }


    }
  
    // Function to remove
    // a key from given queue q
    void Pop()
    {
        Node* temp;
  
        // Check for stack underflow
        if (top == NULL) {
            cout << "\nStack Underflow" << endl;
            exit(1);
        }
        else {
  
            // Assign top to temp
            temp = top;
  
            // Assign second node to top
            top = top->link;
  
            // This will automatically destroy
            // the link between first node and second node
  
            // Release memory of top node
            // i.e delete the node
            free(temp);
        }
    }
  
    // Function to print all the
    // elements of the stack
    void Display()
    {
        Node* temp;
  
        // Check for stack underflow
        if (top == NULL) {
            cout << "\nStack Underflow";
            exit(1);
        }
        else {
            temp = top;
            while (temp != NULL) {
  
                // Print node data
                cout << temp->data;
  
                // Assign temp link to temp
                temp = temp->link;
                if (temp != NULL)
                    cout << " -> ";
            }
            cout << endl;
        }
    }
};
  
// Driven Program
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