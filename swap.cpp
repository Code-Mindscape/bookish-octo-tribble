#include<iostream>
using namespace std;
int swapNumbers(int &a,int &b)
{
    
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int n1,n2;
    int x = 2;
    int y = 9;
    
    cout<<"before swap:x="<<x<<endl;
    cout<<"before swap:y="<<y<<endl;
    swapNumbers(x,y);

    cout<<"after swap:x="<<x<<endl;
    cout<<"after swap:y="<<y<<endl;
    return 0;
}