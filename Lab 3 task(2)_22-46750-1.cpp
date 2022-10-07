#include <iostream>
using namespace std;

   void encode (string str, int j)
   {

      int conv ;
      for ( int i=j; i<str.size();i=i+j+1)
      {
          conv = str[i];
          str[i]=(char)(conv+2);

      }

     cout<<"converted string : "<<str<<endl;


   }

   int main ()
   {

   string str;
   cout<<"enter a sample string(s): "<<endl;;
   getline (cin,str);


   int j;
   cout<<"enter a sample integer (j):"<<endl;
   cin>>j;

   cout<<"sample string(s) : "<<str<<endl;

   cout<<"sample string(j) : "<<j<<endl;

   encode (str,j);

   return 0;

   }

