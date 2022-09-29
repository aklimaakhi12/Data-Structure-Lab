#include<iostream>
using namespace std;

void func (int a,int b)
{
    int num1,num2;

    cin>>num1;
    cin>>num2;

    for(int i=num1; i<num2; i++)
    {
        if(i%2!=0)
        {
            cout<<i<<"\t";
        }
    }

}
int main()
{
    func(2,3);

    return 0;
}




