#include<iostream>
using namespace std;
void inc(int &a)
{
    a++;
}
int main(){

    int x = 10;

    cout<<x<<endl;
    inc(x);
    cout<<x<<endl;
    
    return 0;
}