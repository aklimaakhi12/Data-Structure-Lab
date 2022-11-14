#include <iostream>
using namespace std;

class Queue
{  private:

   int maxsize = 5;
   int queue [5];
   int front =-1;
   int rear=-1;


public:

   bool isEmpty(){
   if((front==-1)&&(rear==-1))
   {
     return true;
   }
   else
    return false;
   }
   bool isFull()
   {
       if (rear==(maxsize-1))
       {
           return true;
       }
       else
            return false;
   }

    bool enqueue(int x)
    {
        if (isFull()==true)

        {
          cout<<"queue if full";
        return false;
        }
        else if (isEmpty()==true)
        {
            front=0;
            rear=0;
            queue[rear]=x;
            return true;
        }
        else
        {rear++;
        queue[rear]=x;
        return true;
        }
    }
    bool dequeue(){
  if(isEmpty()==true)
        {cout<<"queue is empty! dequeue not possible"<<endl;
  }
  else if (front==rear)
        {
            front=rear=-1;
            return true;
  }
  else{
    front++;
    return true;
  }
 }

 int getfrontElement()
 {
     if(isEmpty()==true)
     {
         return -99999999999;
     }
     else
     {
         return queue[front];
     }
 }

   void print()
    {
        if (isEmpty()==true)
        {
            cout<<"queue is empty"<<endl;
        }
        else {
            for(int i=front;i<=rear;i++)
            {
                cout<<queue[i]<<endl;

            }
        }
    }
};

int main()
{
    Queue q;
    q.enqueue(4);
    q.enqueue(6);
    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(2);

    q.dequeue();

    q.print();
}



