#include<iostream>
using namespace std;
int main()
{
    int CP;
    int SP;
    cin>>CP>>SP;
    if(SP>CP){
        cout<<"Profit = "<<SP-CP;
    }
    else{
        cout<<"Loss = "<<CP-SP;
    }
}