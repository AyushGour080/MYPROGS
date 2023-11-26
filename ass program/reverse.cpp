#include <bits/stdc++.h>
using namespace std;

int reverse(int *arr, int f, int l)
{
    swap(arr[f], arr[l]);
    while (f < l)
    {
        reverse(arr,f + 1, l - 1);
        return 0;
    }
    return 0;

}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10};
    for (int i = 0; i <=9; i++)
        cout << array[i]<<" ";
        cout<<endl;
    reverse(array, 0, 9);
    for (int i = 0; i <=9; i++)
        cout << array[i]<<" ";

    return 0;
}