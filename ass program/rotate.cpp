#include <bits/stdc++.h>
using namespace std;

void rotate(int *arr, int pos, int f, int l)
{
    while (pos--)
    {
        swap(arr[f],arr[l]);
        rotate(arr, pos, f + 1, l - 1);
        return;
    }
    return;
}
void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    display(arr, 8);
    rotate(arr, 3, 0, 8);
    display(arr, 8);

    return 0;
}