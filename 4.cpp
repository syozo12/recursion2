#include <iostream>
using namespace std;
int print_triangle(int arr[], int n)
{
    if (n == 0)
        return 1;//if 0 then in main it returns 0 but for strings is differenvt
    for (int i = 0; i < n; ++i)
    {
        arr[i]=arr[i]+arr[i+1];
        cout << arr[i] << " ";
    }
    cout<<endl;
    print_triangle(arr, n - 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << "element of array in reverse order are";
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout<<print_triangle(arr, n - 1);
}