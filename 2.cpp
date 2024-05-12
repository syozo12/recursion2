//print index of a given element in an array
#include<iostream>
using namespace std;
int check(int arr[],int size,int target){
    if(size<0) return -1;
    if(arr[size]==target)
    return size;
    else check(arr,size-1,target);
    

}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int target=12;
    int n = sizeof(arr) / sizeof(arr[0]);
   cout<< check(arr, n-1,target);

}