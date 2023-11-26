#include <bits/stdc++.h>
using namespace std;
class Queue_array
{
private:
    int front = -1, rear = -1;
    struct control_block
    {
        int capacity;
        int *arr;
    };
    control_block *s;

public:
    Queue_array(int capacity)
    {
        s = new control_block;
        s->capacity = capacity;
        s->arr = new int(s->capacity);
    }

    void Enqueue(int data)
    {
        if ((rear + 1) % s->capacity == front)
        {
            cout << " NO SPACE :" << endl;
        }
        else
        {
            rear = (rear + 1) % s->capacity;
            s->arr[rear] = data;
            if (front == -1)
                front = rear;
        }
    }

    int dequeue()
    {
        int data;
        if (front == -1 && rear == -1)
        {
            cout << " EMPTY :" << endl;
            return -1;
        }
        else if (front == rear)
        {
            data = s->arr[front];
            front = rear = -1;
        }
        else
        {
            data = s->arr[front];
            front = (front + 1) % s->capacity;
        }
        return data;
    }
};

int main()
{
    Queue_array q(5);
    q.dequeue();
   q.Enqueue(1);
    cout << q.dequeue() << endl;

    q.Enqueue(2);
    cout << q.dequeue() << endl;

    q.Enqueue(4);
    cout << q.dequeue() << endl;
    q.Enqueue(5);
    cout << q.dequeue() << endl;
    q.Enqueue(5);
    cout << q.dequeue() << endl;
    q.Enqueue(5);
    cout << q.dequeue() << endl;
    q.Enqueue(4);

    cout << q.dequeue() << endl;



    cout << q.dequeue() << endl;
    q.Enqueue(1);
    q.Enqueue(1);
    q.Enqueue(1);
    q.Enqueue(1);
    q.Enqueue(1);
    q.Enqueue(1);
    q.Enqueue(1);
    q.Enqueue(1);



    return 0;
}