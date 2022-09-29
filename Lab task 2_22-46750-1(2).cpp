#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int size;
    cout<<"Enter the size of the first element: "<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of first array : "<<endl;

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int size2;
    cout<<"enter the size of the second element : "<<endl;
    cin>>size2;

    int arr2[size2];
    cout<<"Enter the elements of second array : "<<endl;

    for(int i=0; i<size2; i++)
    {
        cin>>arr2[i];
    }

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size2; j++)
        {
            if(arr[i]==arr2[j])
            {
                cout<<arr[i]<<"\t";
            }
        }
    }
    cout<<endl;

    if(a==0)
    {
        cout<<"No common elements!";
    }

    return 0;



}
