#include <bits/stdc++.h>
using namespace std;

int reverse(int *arr, int f, int l)
{
    swap(arr[f], arr[l]);
    while (f < l)
    {
        reverse(arr, f + 1, l - 1);
        return 0;
    }
    return 0;
}

vector<int> intersection(int *a, int *b)
{
    vector<int> v;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (a[i] == b[j])
            {
                v.push_back(b[j]);
                break;
            }
        }
        cout << endl;
    }
    return v;
}

vector<int> _union(int *a, int *b)
{
    vector<int> v;
    for (int i = 0; i < 9; i++)
    {
        v.push_back(a[i]);
        v.push_back(b[i]);
    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v.at(i) == v.at(j))
                v.erase(v.begin() + j);
        }
    }
    return v;
}

int rem_dup(int *arr)
{
    int count =12;
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
    return count;
}

void rotate(int *arr, int pos, int f, int l)
{
    while (pos--)
    {
        swap(arr[f], arr[l]);
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

