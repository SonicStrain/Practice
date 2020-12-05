#include<algorithm>
//User function template for C++

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
int kthSmallest(int arr[], int l, int r, int k) {
    //code here
    sort(arr,arr+r+1);
    int counter = 0,value = arr[0];
    for(int i=0;i<r+1;i++){
        if(counter<k && value != arr[i]){
            value = arr[i];
            counter++;
        }
    }
    return value;
}
