#include<iostream>
using namespace std;
int main()
{
    int r,c;

    cout<<"Enter row: ";
    cin>>r;
    cout<<"Enter column: ";
    cin>>c;

    int arr[r][c];

    cout<<"Enter the value of the matrix: "<<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
    {
        cout<<"arr["<<i<<"]["<<j<<"]=";
        cin>>arr[i][j];
    }

    }


    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }

    cout<<"Transpose: "<<endl;

    cout<<endl;

    int arr2[r][c];
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
    {
        arr2[i][j]=arr[j][i];
        cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
    }


    return 0;



}
