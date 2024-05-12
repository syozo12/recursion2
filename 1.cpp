// print elements of arr in reverse order
#include <iostream>
using namespace std;
int print(int arr[], int size)
{
    if (size < 0)
        return 0;
    else
    {
        cout << arr[size]<<endl;
        print(arr, size - 1);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << "element of array in reverse order are"<<endl;
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n-1);
}