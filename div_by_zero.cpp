//Code to handle exception created by divide zero error
#include <iostream>
using namespace std;

int main() 
{
    float n1, n2, ans;
    cout<<"Enter the values of 1 & 2: "<<endl;
    cin>>n1>>n2;
    try
    {
        if(n2==0)
        {
            throw n2;
        }
        else
        {
            ans=n1/n2;
            cout<<"Answer = "<<ans<<endl;
        }
    }
    catch (float num)
    {
        cout<<"\n ERROR: Division by "<<num<<endl;
    }
}

/* 
OUTPUT: 
Enter the values of 1 & 2: 
8 0

ERROR: Division by 0

Enter the values of 1 & 2: 
8 4
Answer = 2
*/
