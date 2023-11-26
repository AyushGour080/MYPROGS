#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node()
    {
        data = 0;
        next = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class linkedlist
{
    node *top;

public:
    linkedlist()
    {
        top = NULL;
    }
    void insertNode(int data)
    {
        node *newnode = new node(data);

        if (top == NULL)
        {
            top = newnode;
            return;
        }
        node *temp = top;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    void deletenode(int nodeoffset)
    {
        node *temp1 = top, *temp2 = NULL;
        int listlen = 0;
        if (top == NULL)
        {
            cout << " list is empty " << endl;
            return;
        }
        while (temp1 != NULL)
        {

            temp1 = temp1->next;
            listlen++;
        }
        if (listlen < nodeoffset)
        {
            cout << "index out of range " << endl;
            return;
        }
        temp1 = top;
        if (nodeoffset == 1)
            top = top->next;
        delete temp1;
        return;
        while (nodeoffset-- > 1)
        {
            temp2 = temp1;
            temp1 = temp1->next;
        }
        temp2->next = temp1->next;
        delete temp1;
    }

    void showList()
    {
        node *temp = top;
        if (top == NULL)
        {
            cout << " list is empty " << endl;
            return;
        }
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    linkedlist l;
    l.insertNode(1);
    l.insertNode(2);
    l.insertNode(3);
    l.insertNode(4);

    l.showList();

    l.deletenode(2);
    l.showList();
    return 0;
}