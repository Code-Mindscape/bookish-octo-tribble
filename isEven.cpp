#include<iostream>
using namespace std;
bool isEven(int n){
    int m = 8;
    if (n%2==0)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int a = 8;
    cout<<isEven(a);
}