#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class CircularLinkedList{
    Node *firstNode;
    Node *lastNode;
    public:
    CircularLinkedList(){
        firstNode = NULL;
        lastNode = NULL;
    }
    void insertNode(int data){
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        if(firstNode == NULL){
            firstNode = newNode;
            lastNode = newNode;
            newNode->next = firstNode;
        }
        else{
            lastNode->next = newNode;
            lastNode = newNode;
            newNode->next = firstNode;
        }
    }
    void deleteNode(int data){
        Node *current = firstNode;
        Node *prev = NULL;
        if(firstNode == NULL){
            cout<<"Empty List!!"<<endl;
        }
        else if(firstNode->data == data){
            prev = firstNode;
            while(prev->next != firstNode){
                      prev = prev->next;
            }
            firstNode = firstNode->next;
            prev->next = firstNode;
            delete current;
        }
        else{
            while(current->next != firstNode && current->data != data){
                prev = current;
                current = current->next;
            }
            if(current->data == data){
                prev->next = current->next;
                delete current;
            }
            else{
                cout<<"Element not found!!"<<endl;
            }
        }
    }
    void display(){
        Node *current = firstNode;
        if(firstNode == NULL){
            cout<<"Empty List!!"<<endl;
        }
        else{
            while(current->next != firstNode){
                cout<<current->data<<"->";
                current = current->next;
            }
            cout<<current->data<<endl;
        }
    }
};

int main(){
    CircularLinkedList cll;
    cll.insertNode(10);
    cll.insertNode(20);
    cll.insertNode(30);
    cll.insertNode(40);
    cll.display();
    cll.deleteNode(30);
    cll.display();
    return 0;
}



