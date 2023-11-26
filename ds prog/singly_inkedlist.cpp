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
};

class singlylinkedlist
{
    node *top;

public:
    singlylinkedlist()
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

        node *current = top;

        top = temp;
        top->data = data;
        top->next = current;
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
            temp1->next = temp;
        }
    }

    void insertNode_atend(int data)
    {
        node *temp = new node;
        if (IsEmpty())
        {
            top = temp;
            top->data = data;
            top->next = NULL;
        }
        else
        {
            node *current = top;
            while (current->next != NULL)
                current = current->next;

            current->next = temp;
            temp->data = data;
            temp->next = NULL;
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
            curr = top;
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

            while (curr != NULL)
            {
                cout << curr->data << " ";
                curr = curr->next;
            }
        }
        cout << endl;
    }
};

int main()
{
    singlylinkedlist l1;
    // l1.displayList();
    l1.insertNode_atend(1);
    l1.insertNode_atend(2);
    l1.insertNode_atend(3);
   // l1.insertNode_atend(4);
    l1.insertNode_atend(5);
    l1.insertNode_atend(6);
    l1.insertNode_atend(7);
    l1.insertNode_atend(8);
    l1.insertNode_atfront(0);
  
    l1.displayList();
      l1.insertNode_inBetween(4,4);
   // l1.deleteNode(7);
    l1.displayList();
    l1.search(7);
    return 0;
}