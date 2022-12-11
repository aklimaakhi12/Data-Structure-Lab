#include<iostream>
using namespace std;


class Node
{
public:

    int data;
    Node*nextnode;


    Node()
    {
        this->data=0;
        this->nextnode=NULL;
    }
    Node(int data)
    {
        this->data=data;
        this->nextnode=NULL;
    }
};




class linkedlist
{

public:

    Node *firstNode;

    linkedlist()
    {
        firstNode=NULL;
    }




    void insert()
    {
        int n;
        cout<<"enter the elements"<<endl;
        cin>>n;

        Node *currentNode;
        Node *newNode=new Node(n);

        if (firstNode == NULL)
        {
            firstNode=newNode;
            currentNode=newNode;

        }
        else
        {
            currentNode=firstNode;
            while (currentNode->nextnode!=NULL)
            {
                currentNode=currentNode->nextnode;
            }
            currentNode->nextnode=newNode;
            currentNode=newNode;
            cout<<"inserted"<<endl;

        }
    }




    void print()
    {
        Node *currentNode=firstNode;

        if(firstNode==NULL)
        {
            cout<<"linked list empty"<<endl;

        }
        cout<<"the list: "<<endl;
        while (currentNode!=NULL)
        {
            cout<<currentNode->data<<" ";
            currentNode=currentNode->nextnode;

        }
        cout<<endl;
    }




    int search()
    {
       int a;
    cout<<"enter element you want to search"<<endl;
    cin >>a;
        bool flag =false;

        Node*currentNode=firstNode;
        while(currentNode!=NULL)
        {

            if(currentNode->data==a)
            {
                flag=true;
            }
            currentNode=currentNode->nextnode;
        }



        if(flag==false)
        {
            cout<<"not found"<<endl;

        }
        else
        {
            cout<<"found"<<endl;
        }
    }






    void insertFirst()

    {
        int a;
        cout<<"enter the element you want to insert in the first position"<<endl;
        cin>>a;
        Node*newNode=new Node(a);

        if(firstNode==NULL)
        {
            firstNode=newNode;
            newNode=NULL;
        }
        else
        {
            newNode->nextnode=firstNode;
            firstNode=newNode;
        }


        cout<<"element inserted at the first position"<<endl;

    }



    void insertmid()
    {
       int a,p;
       cout<<"enter the element to insert in mid: "<<endl;
       cin>>a;
        cout<<"enter previous number : "<<endl;
        cin>>p;

        Node *prevNode;
        Node *currentNode=firstNode;
       Node *newNode=new Node(a);

       while(currentNode!=NULL)
        {
            if(currentNode->data == p)
            {
               newNode->nextnode=currentNode->nextnode;
               currentNode->nextnode=newNode;
               break;
            }
            currentNode=currentNode->nextnode;
        }


        cout<<"Element inserted at the specified position"<<endl;
    }





    void deletefirst()
    {

       Node *currentNode=firstNode;
    firstNode=currentNode->nextnode;
    delete currentNode;



    cout<<"element deleted from first position"<<endl;

    }



    void deletelast()
    {
        Node *currentNode=firstNode;
        Node *previousNode=NULL;

        while(currentNode->nextnode!=NULL)
        {
            //previousNode=currentNode;
            currentNode=currentNode->nextnode;
        }

        previousNode->nextnode=NULL;
        delete currentNode;



        cout<<"element deleted from last position"<<endl;

     }



     void deletemiddle()
{
        int a;
        cout<<"Enter the element to be deleted: ";
        cin>>a;

        Node *currentNode=firstNode;
        Node *previousNode= NULL;

         while(currentNode!=NULL)
        {
            if(currentNode-> data== a)
            {
                previousNode-> nextnode= currentNode->nextnode;
                delete currentNode;
                break;

            }
            else
            {
            previousNode= currentNode;
            currentNode=currentNode->nextnode;
            }
        }

        cout<<"Element deleted "<<endl;
}


};
int main()
{
    linkedlist i;


    i.insert();
    i.insert();
    i.insert();
    i.insert();
    i.insert();
    i.print();



    i.search();


    i.insertFirst();
    i.insertmid();
    i.print();


    i.deletefirst();
    i.deletelast();
    i.print();

    i.deletemiddle();
    i.print();


}
