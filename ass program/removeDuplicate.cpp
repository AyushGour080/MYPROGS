#include <bits/stdc++.h>
using namespace std;
  
class _array
{int count =12;
    
public:


    void rem_dup(int *arr)
    {
        for (int i = 0; i < count; i++)
        {
            for (int j = i + 1; j < count; j++)
            {
                if (arr[i] == arr[j])
                {
                    for (int i = j; i < count; i++)
                        arr[i] = arr[i + 1];
                    count--;
                }
            }
        }
       
    }
    void display(int* arr)
    {
        for (int i = 0; i < count; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
   
    int ar[] = {1, 1, 23, 32, 23, 43, 34, 34, 5, 3, 6, 3};

  _array a;
    a.display(ar);
    a.rem_dup(ar);
    a.display(ar);
    return 0;
}