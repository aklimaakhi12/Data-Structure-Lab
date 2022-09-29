#include<iostream>
 using namespace std;
 int main()
 {
    int i;
    int arr[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    cout <<"Sequential order."<<endl;


   for(int i=0; i<13; i++)
   {
       cout<<arr[i];

   }
   cout<<endl<<"\n";
   cout<<"Reverse order."<<endl;

   for(int i=12; i>=0; i--)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;



   return 0;


}
