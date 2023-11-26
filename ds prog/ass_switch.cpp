#include <bits/stdc++.h>
#include "functions.cpp"
using namespace std;

int main()
{
    int choice, finish = 1;
    cout << "enter your choice : \n"
         << "1 reverse \n2 union \n3 intersection \n4 remove duplicate \n5 rotate matrix \n6 traverse spiral \n"
         << endl;
    do
    {
        cin >> choice;

        switch (choice)

        {
        case 1:
        {
            int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
            display(array, 10);
            reverse(array, 0, 9);
            display(array, 10);
            break;
        }
        case 2:
        {
            int a[] = {1, 3, 4, 22, 5, 9, 23, 55, 33};
            int b[] = {1, 3, 8, 22, 77, 123, 42, 55, 32};
            vector<int> v = _union(a, b);
            sort(v.begin(), v.end());
            for (int i = 0; i < v.size(); i++)
                cout << v.at(i) << " ";
            break;
        }
        case 3:
        {
            int a[] = {1, 3, 4, 2, 5, 9, 22, 55, 33, 43};
            int b[] = {1, 3, 8, 22, 77, 123, 42, 55};
            display(a, 10);
            display(b, 8);
            vector<int> n = intersection(a, b);

            for (int i = 0; i < n.size(); i++)
                cout << n.at(i) << " ";
            break;
        }
        case 4:
        {
            int ar[] = {1, 1, 23, 32, 23, 43, 34, 34, 5, 3, 6, 3};
            display(ar, 12);
            int count =rem_dup(ar);
            display(ar, count);
            break;
        }
        case 5:
        {
            int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
            display(arr, 8);
            rotate(arr, 3, 0, 8);
            display(arr, 8);

            break;
        }
        default:
        {
            cout << "invalid choice" << endl;
        }
        }
        cout << " For exit press 0 :\n To continue press any number :" << endl;
        cin >> finish;
    } while (finish != 0);
  cout<<" the program is finished "<<endl;
    return 0;
}
