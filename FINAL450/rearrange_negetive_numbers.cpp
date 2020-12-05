#include <iostream>
#include <algorithm>
using namespace std;

void rearrange(int arr[],int n){
    int counter = 0;
    for(int i=0;i<n;i++){
        if(arr[i] < 0){
            swap(arr[i],arr[counter]);
            counter++;
        }
    }
}


void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
 
// Driver code
int main()
{
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}
