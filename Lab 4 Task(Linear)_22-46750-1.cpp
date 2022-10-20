#include<iostream>
using namespace std;
int main()
{
    int A[50], n;
    int key;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element of array: ";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    cout<<"Enter the element you want to search: ";
    cin>>key;
    for(int i=0; i<n; i++){
        if(key==A[i]){
            cout<<"the element "<<key<<" Found at: "<<i+1<<" number position";

            return 0;
        }
    }
    cout<<"Not found";
    return 0;
}
