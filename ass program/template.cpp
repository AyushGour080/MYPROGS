#include <bits/stdc++.h>
using namespace std;

template <class x>
class arraylist
{
private:
    struct controlblock
    {
        int capacity;
        x *arr_ptr;
    };
    controlblock *s;

public:
    arraylist(int capacity)
    {
        s = new controlblock;
        s->capacity = capacity;
        s->arr_ptr = new x(s->capacity);
    }
    void add_element(int index, x data)
    {
        if (index >= 0 && index <= s->capacity - 1)
            s->arr_ptr[index] = data;
        else
            cout << "index not valid " << endl;
    }
    void view_element(int index, x &data)
    {
        if (index >= 0 && index <= s->capacity - 1)
            data = s->arr_ptr[index];
        else
            cout << "index not valid " << endl;
    }
    void view_list()
    {
        for (int i = 0; i < s->capacity; i++)
        {
            cout << s->arr_ptr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int data;
    arraylist<int> list1(5);
    arraylist<double> list2(5);
    cout << "this is running " << endl;
    list2.add_element(0, 1.1);
    list2.add_element(1, 2.4);
    list2.add_element(2, 3.7);
    list2.add_element(3, 4.8);
    list2.add_element(4, 5.9);
        cout << "this is running " << endl;

    list2.view_list();

    list1.add_element(0, 1);
    list1.add_element(1, 2);
    list1.add_element(2, 3);
    list1.add_element(3, 4);
    list1.add_element(4, 5);
    list1.view_element(4, data);
    cout << data << endl;
    list1.view_list();

    return 0;
}