/*Prepare an algorithm and write a program on the following scenario using Brute force approach and Divide and Conquer Strategy and compare both the algorithms in terms of
efficiency. Consider a sorted integer array A = {A[0]<A[1]<…<A[i]<…A[n-1]} where n is the total number of values in the array. And it has been given to you in an 
anti-clockwise rotated form such that R(A) = {A[n-k]<A[n-k+1]<…<A[n-1]<A[0]<A[1]<…A[n-k-1]} where k represents the number of rotations occurred in A. 
Find the number of rotations (k) taken place in the given R(A) array.*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,j,i;
  cin>>n;
  int count=0;
  int temp;
  int a[n];
  for(i=0;i<n;i++){
      cin>>a[i];
  }
  int k;
  cout<<"The sorted array is:";
  for(i=0;i<n;i++){
      if(a[i]>a[i+1]){
          reverse(a, a+i+1);

            reverse(a + i + 1, a + n);

            reverse(a, a + n);
          count=i+1;
      }
  }
  for(i=0;i<n;i++){
      cout<<a[i]<<" ";
  }
 cout<<"\n";
 cout<<"The array is rotated "<<count<<" times";
 

return 0;
}
