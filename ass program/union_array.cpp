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

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j < v.size(); j++)
        {
            if (v.at(i) == v.at(j))
                v.erase(v.begin() + j);
        }
    }
    return v;
}

int main()
{
    int a[] = {1, 3, 4, 22, 5, 9, 23, 55, 33};
    int b[] = {1, 3, 8, 22, 77, 123, 42, 55,32};
    cout << "this running" << endl;
    vector<int> v = _union(a, b);
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    cout << v.at(i) << " ";
    return 0;
}