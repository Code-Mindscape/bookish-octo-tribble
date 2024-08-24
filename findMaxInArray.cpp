#include <iostream>
using namespace std;
int maxInArr(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}


int main()
{

    int arr[15] = {1, 2, 3, 4, 43, 32, 21, 2, 44, 7, 64, 75, 99, 83, 41};
    cout << maxInArr(arr, 15);

    return 0;
}
