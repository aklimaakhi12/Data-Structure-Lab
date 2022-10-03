#include<iostream>
using namespace std;
int main()
{
    int arr[10], num, count=0;
    cout<<"Enter the elements of array : "<<endl;

    for(int i=0; i<9; i++)
    {
        cin>>arr[i];
    }

    cout<<"Input a number to search : ";
    cin>>num;

    for(int i=0; i<9; i++)
    {
        if(num==arr[i])

            count++;
    }

    cout<<count<<endl;

    return 0;



}
