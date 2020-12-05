#include <climits>
// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int maximum = INT_MIN , sum = 0;
    
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(maximum < sum) maximum = sum;
        if(sum < 0) sum = 0;
    }
    
    return maximum;
    
}
