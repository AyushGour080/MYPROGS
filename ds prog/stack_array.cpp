#include <bits/stdc++.h>
using namespace std;
template <class T>
class Stack
{
private:
  int top = -1;
  struct controlBlock
  {
    int capacity;
    T *array;
  };
  controlBlock *ptr;

public:
  Stack(int capacity)
  {
    ptr = new controlBlock;
    ptr->capacity = capacity;
    ptr->array = new T(ptr->capacity);
  }
  void push(T data)
  {
    if (top == ptr->capacity)
    {
      cout << "stack is full" << endl;
      return;
    }
    else
    {

      top++;
      ptr->array[top] = data;
    }
  }

  T pop()
  {
    if (top == -1)
    {
      cout << "stack is empty" << endl;
      
    }
    else
    {
      int temp = ptr->array[top];
      top--;
      return temp;
    }
  }

  void peek()
  {
    if (top == -1)
    {
      cout << "stack is empty" << endl;
      return;
    }
    else
      cout << ptr->array[top] << " ";
  }
};

int main()
{
  Stack<int> s(10);
  s.push(5);
  s.peek();
 
  s.pop();




  return 0;
}