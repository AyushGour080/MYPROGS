#include <bits/stdc++.h>
using namespace std;
static int capacity = 100;
static int size = 6;
void insert(int *arr)
{
  int n, index;
  cout << "enter the index no and element to be inserted " << endl;
  cin >> index >> n;
  if (size >= capacity)

    cout << " Array is full " << endl;

  else
  {
    for (int i = size - 1; i >= index; i--)
      arr[i + 1] = arr[i];
    arr[index] = n;
    size++;
  }
}
void _delete(int *arr)
{
  int index;
  cout << "enter the index of element to be deleted " << endl;
  cin >> index;
  for (int i = index; i < size; i++)
    arr[i] = arr[i + 1];
  size--;
}
int search(int *arr)
{
  int n;
  cout << "enter the number to be searched " << endl;
  cin >> n;
  for (int i = 0; i < size; i++)
    if (arr[i] == n){
      cout << n << " found at " << i << "th index" << endl;
      return -1;
      }
      cout << n << " do not found at any index" << endl;
return 0;
  {
    /* code */
  }
}

void display(int *arr)
{
  cout << "size of array : " << size << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{

  int array[capacity] = {22, 34, 56, 46, 34, 23};

  display(array);
  insert(array);
  display(array);
  _delete(array);
  display(array);
  search(array);

  return 0;
}