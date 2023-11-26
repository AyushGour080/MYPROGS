#include <bits/stdc++.h>
using namespace std;
// template<class T>

class node
{
public:
    int data;
    node *next, *prev;
    node()
    {
        data = 0;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLinkedList
{
private:
    node *top;

public:
    DoublyLinkedList()
    {
        top = NULL;
    }
    bool IsEmpty()
    {
        if (top == NULL)
            return 1;
        else
            return 0;
    }

    void insertNode_atfront(int data)
    {
        node *temp = new node;

        if (IsEmpty())
        {
            top = temp;
            top->data = data;
            top->next = NULL;
            top->prev = NULL;
        }
        else
        {
            node *current = top;
            top = temp;
            top->data = data;
            top->next = current;
            current->prev = temp;
            top->prev = NULL;
        }
    }

    void insertNode_inBetween(int Afternode, int data)
    {
        if (Afternode > listlen())
        {
            cout << " node does not exist " << endl;
            return;
        }
        int nodenumber = 1;
        node *temp;
        node *temp1 = new node;
        if (IsEmpty())
        {
            top = temp;
            top->data = data;
            top->next = NULL;
            top->prev = NULL;
        }
        else
        {
            node *current = top;
            while (nodenumber != Afternode)
            {
                current = current->next;
                nodenumber++;
            }
            temp = current->next;
            current->next = temp1;
            temp1->data = data;
            temp1->prev = current;
            temp1->next = temp;
            
        }
    }

    void insertNode_atEnd(int data)
    {
        node *temp = new node;
        if (IsEmpty())
        {
            top = temp;
            top->data = data;
            top->next = NULL;
            top->prev = NULL;

        }
        else
        {
            node *current = top;
            while (current->next != NULL)
                current = current->next;

            current->next = temp;
            temp->data = data;
            temp->next = NULL;
            temp->prev = current;
        }
    }

    void deleteNode(int nodeNumber)
    {
        if (IsEmpty())
        {
            cout << " list is empty " << endl;
            return;
        }
        else if (listlen() < nodeNumber)
        {
            cout << " Node number does not exist " << endl;
            return;
        }

        int count = 2;
        node *curr = top;
        if (nodeNumber == 1)
        {
            top = NULL;
            delete curr;
            return;
        }
        while (count != nodeNumber)
        {
            curr = curr->next;
            count++;
        }
        node *temp = curr->next;
        curr->next = curr->next->next;
        curr->next->prev = curr;
        delete temp;
    }

    int listlen()
    {
        if (top == NULL)
        {
            return 0;
        }
        int len = 1;
        node *temp = top;
        while (temp->next != NULL)
        {
            len++;
            temp = temp->next;
        }
        return len;
    }

    void search(int key)
    {
        int found = 0;
        node *curr = top;
        if (IsEmpty())
        {
            cout << "list is empty " << endl;
            return;
        }
        else
        {

            while (curr != NULL)
            {
                if (key == curr->data)
                {
                    found++;
                    break;
                }
                curr = curr->next;
            }
        }
        if (found != 0)
            cout << "element exist " << endl;
        else
            cout << "element does not exist " << endl;
    }

    void displayList()
    {

        node *curr = top;
        if (IsEmpty())
        {
            cout << "list is empty " << endl;
            return;
        }
        else
        {

            while (curr->next!= NULL)
            {
                cout << curr->data << " ";
                curr = curr->next;
            }
             cout<<endl;
               while (curr->prev!= NULL)
            {
                cout << curr->data << " ";
                curr = curr->prev;
            }
       
        }
        cout << endl;
    }
};

int main()
{
    DoublyLinkedList l;
    l.insertNode_atEnd(1);
    l.insertNode_atEnd(2);
    l.insertNode_atEnd(3);
    l.insertNode_atEnd(4);
    l.insertNode_atEnd(5);
    l.displayList();
    



    return 0;
}