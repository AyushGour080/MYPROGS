#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node()
    {
        data = 0;
        next = NULL;
    }
};

class Stack
{
private:
    node *top;

public:
    Stack()
    {
        top = NULL;
    }

    void push(int data)
    {

        node *temp = new node;
        if (top == NULL)
        {
            top = temp;
            top->data = data;
            top->next = NULL;
        }
        else
        {
            node *t;
            t = top;
            top = temp;
            top->data = data;
            top->next = t;
        }
    }
    int pop()
    {
        if (top == NULL)
        {
            cout << " stack is empty " << endl;
            return -1;
        }
        else
        {
            node *t;
            t = top;
            int data = top->data;
            top = top->next;
            delete t;
            return data;
        }
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout << s.pop() << endl;
    cout << s.pop() << endl;
       cout << s.pop() << endl;
    cout << s.pop() << endl;
       cout << s.pop() << endl;
    cout << s.pop() << endl;
    return 0;
}