#include <bits/stdc++.h>
using namespace std;

class _array
{
public:
    void _sort(int *arr,int size)
    {
       

        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] > arr[i + 1])
                    swap(arr[i], arr[i + 1]);
            }
        }
    }
    void display(int *arr,int size)
    {
        
        for (int i = 0; i < size; i++)

            cout << arr[i] << " ";
        cout << endl;
    }
};
int main()
{
    _array a;
    int arr[] = {34, 5, 3, 7, 55, 344, 12, 32};
    int size = sizeof(arr) / sizeof(int);
    a.display(arr,size);
    a._sort(arr,size);
    a.display(arr,size);
    return 0;
}