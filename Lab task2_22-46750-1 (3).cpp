#include<iostream>
using namespace std;
int main()
{
    int size,i,j;
    int flag=0;
    cout<<"enter the size of the 1st element  : "<<endl;
    cin>>size;

    int arr[size];
    cout<<"enter the elements of 1st array : "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    for( i=0; i<size; i++)
    {
        for(j=0; j<i; j++)

            {if(arr[i]==arr[j])
            break;
            }





              if(i==j){
                cout<<arr[i]<<" ";

                flag=1;
              }


        }

    if (flag==0)
    {
        cout<<"array already unique";
    }


    return 0;
}
