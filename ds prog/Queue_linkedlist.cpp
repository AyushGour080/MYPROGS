#include<bits/stdc++.h>
using namespace std ;
 class Queue_list
 {
   private:
    
   struct node
   {
     int data=0;
     node *link = NULL;
   };
   node *front = NULL , *rear =NULL ;
   //node *q =new node;
   public:
   
   void enqueue(int data)
   {
    node *temp = new node;
    temp->data=data;
     
    if( front == NULL && rear == NULL)
    {
        front = rear = temp;
        
    }
    else
    {
        rear->link =temp;
        rear=temp;
       
    }
   }

   int dequeue()
   {
    if(front==NULL)
    {
      cout<<" queue is empty :"<<endl;
      return -1;
    }
    else{
      node *temp ;
      temp = front;
      if(front == rear)
      front = rear = NULL;
      else
      front= front->link;
      int data =temp->data;
      delete temp;
      return data;

    }
   }
   


   
 };
int main()
{
  Queue_list q;
  cout<<q.dequeue()<<endl;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  cout<<q.dequeue()<<endl;
  cout<<q.dequeue()<<endl;
  cout<<q.dequeue()<<endl;
  cout<<q.dequeue()<<endl;
      
return 0;
}