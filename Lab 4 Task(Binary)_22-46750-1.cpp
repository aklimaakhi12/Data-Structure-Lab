#include<iostream>
using namespace std;
int getposition(int arr[],int n)
{
    int size = n;
    int item;
    cout<<"WHATS THE INTEGER: ";
    cin>>item;
    int position= -1;
    int fast = 0;
    int last = size-1;

   while(fast<=last)
    {
        int middle =(fast+last)/2;
        if(arr[middle]>item)
        {
            last = middle-1;
        }
        else if(arr[middle]<item)
        {
            fast = middle+1;

        }
        else
        {
            position = middle;
            break;
        }
    }
    if(position==-1)
    {
        cout<<"Not Found";
    }
    else{
    cout<<item<<" Found \nPOSITION: "<<position;
    }
}
int main()
{
   int n;
    cout<<"Enter Array size: "<<endl;
    cin>>n;
    cout<<"Enter Array Elements:\n";
    int arr[n];
    for(int i = 0; i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i]=temp;
            }
        }
    }
    getposition(arr,n);
}

