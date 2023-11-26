#include <bits/stdc++.h>
using namespace std;

vector<int> _union(int *a, int *b)
{
    vector<int> v;
    for (int i = 0; i < 9; i++)
    {
        v.push_back(a[i]);
        v.push_back(b[i]);
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (v.at(i) == v.at(j))
                v.erase(v.begin() + j);
        }
    }
    return v;
}

int main()
{
    int a[] = {1, 3, 4, 2, 5, 9, 22, 55, 33, 43};
    int b[] = {1, 3, 8, 22, 77, 123, 42, 55};
    cout << "this running" << endl;
    vector<int> n = _union(a, b);
    for (int i = 0; i < n.size(); i++)
        cout << n.at(i) << " ";
    return 0;
}