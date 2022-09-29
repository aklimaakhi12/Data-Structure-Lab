#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the array : ";

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Even elements are: ";
    for(int i=0; i<size; i++)
    {

        if(arr[i]%2==0)
        {
            cout<<arr[i]<<"\t";
        }

    }
    cout<<endl;

    cout<<"Odd elements are : ";
    for(int i=0; i<size; i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<arr[i]<<"\t";
        }
    }

    return 0;
}
