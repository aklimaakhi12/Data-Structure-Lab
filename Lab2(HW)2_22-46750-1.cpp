#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"enter the size of the array: "<<endl;
    cin>>size;

    int arr[size];
    cout<<"enter the elements : ";
   for (int i=0;i<size;i++)
   {
       cin>>arr[i];
   }
    int arr2[size];

    for(int i=0; i<size; i++)
    {
        arr2[i]=0;
    }


    for(int i=0; i<size; i++)
    {
        int count=1;

        if(arr2[i]== 1)
        {
            continue;
        }

        for(int j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr2[j] = 1;
            }
        }

        cout<<"The Number "<<arr[i]<<" occurs = "<<count<<" Times"<<endl;
    }


}
