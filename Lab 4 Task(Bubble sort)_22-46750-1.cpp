#include <iostream>
using namespace std;
int swap (int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int arr[]={12,56,30,21,71,25,9};
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    for(int i=0;i<size;i++)
    {
        int st=i;
        for(int j=0;j<size;j++)
        {
            int crt=j;
            if(crt<(size-1)-st)
            {
                if(arr[crt]>arr[crt+1])
                {
                   swap (& arr[crt],& arr[crt+1]);
                }
            }
        }
    }

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";

    }

}
