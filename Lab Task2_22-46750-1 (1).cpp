#include<iostream>
using namespace std;
int main()
{
    int size1;
    cout<<"Enter the size of the first array : ";
    cin>>size1;

    int arr[size1];
    cout<<"Enter the elements of the array : ";

    for(int i=0; i<size1; i++)
    {
        cin>>arr[i];
    }

    int size2;
    cout<<"Enter the size of the second array : ";
    cin>>size2;

    int arr2[size2];
    cout<<"Enter the elements of the second array : ";

    for(int i=0; i<size2; i++)
    {
        cin>>arr2[i];
    }
    int size3 = size1+size2;
    int mrgarr[size3];

    for(int i=0; i<size1; i++)
    {
        mrgarr[i]=arr[i];
    }
    for(int i=0; i<size2; i++)
    {
        mrgarr[size1]=arr2[i];
        size1++;
    }
    cout<<"Merge array in reverse: ";
    for(int i=size3-1; i>=0; i--)
    {
        cout<<mrgarr[i]<<" ";
    }

    return 0;

}
