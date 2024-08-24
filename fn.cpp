#include <iostream>
using namespace std;
void swap(int &n, int &m)
{
    int temp = n;
    n = m;
    m = temp;
}
int main()
{
    int a = 8;
    int b = 16;

    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    swap(a, b);
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
}