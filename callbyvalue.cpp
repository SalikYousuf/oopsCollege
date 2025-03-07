#include <iostream>
using namespace std;

int callbyvalue(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

int swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;

    return;
}

int callbyReference(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    callbyvalue(arr, 5);
    cout << "\n";
    callbyReference(arr, 5);
    int a = 5, b = 7;
    swap(a, b);
    return 0;
}