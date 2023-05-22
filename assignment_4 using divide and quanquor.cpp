/*Prepare an algorithm and write a program on the following scenario using Brute force approach and Divide and Conquer Strategy and compare both the algorithms in terms of 
efficiency. Consider a sorted integer array A = {A[0]<A[1]<…<A[i]<…A[n-1]} where n is the total number of values in the array. And it has been given to you in an 
anti-clockwise rotated form such that R(A) = {A[n-k]<A[n-k+1]<…<A[n-1]<A[0]<A[1]<…A[n-k-1]} where k represents the number of rotations occurred in A. 
Find the number of rotations (k) taken place in the given R(A) array.*/

#include <iostream>
using namespace std;
int findRotationCount(int arr[], int size){
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        if (arr[left] <= arr[right])
            return left;
    int mid = left + (right - left) / 2;
    int prev = (mid + size - 1) % size;
    int next = (mid + 1) % size;
    if (arr[mid] <= arr[prev] && arr[mid] <= arr[next])
            return mid;
    if (arr[mid] <= arr[right])
            right = mid - 1;
    else if (arr[mid] >= arr[left])
            left = mid + 1;
    } 
    return -1; 
    
} 
int main() {
    int n;
    cin>>n;
    int i;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        } 
        int rotations = findRotationCount(a, n);
        cout << "The array is rotated: " << rotations<<" times; 
        return 0;
}
