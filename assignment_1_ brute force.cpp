/*
Consider an array A of length N, that contains integers, such that the integers in A satisfy the following conditions:
 (i). A[i] = A[i+2]-1, where i<n-2
(ii). A[0]<A[1]
 If an array satisfies the above condition, we call such array as “Partial-Array”.
 The Array
3	10	4	11	5	12	6
is partial since it satisfies the above condition.
 a.      Given any “Partial-Array(A)”, design an algorithm and write the program to arrange the elements of A in an increasing order in such a way that your algorithm should comply with the following conditions
(i). Algorithm should do only swap operation that too among the adjacent indices (i.e., You can swap (A[i], A[i+1]) where (i<n-1) or swap (A[i], A[i-1]) where (i>0).
(ii). You must do all the operations with the given input array only and you are not allowed to create secondary array for the purpose.
Finally compare your prepared algorithm with insertion sort and merge sort and conclude which algorithm is efficient in terms of time complexity.
*/

//brute force

#include <iostream>
using namespace std;
int main() {
   int i,n,j,temp;
   int count=0;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   
   for(i=0;i<n;i++){
       
       if(a[i]<a[i+1]){
           count++;
       }
       
   }
   while(count!=n-1){
       count=0;
       for(i=0;i<n;i++){
           if(a[i]>a[i+1]){
           temp=a[i];
           a[i]=a[i+1];
           a[i+1]=temp;
        
       }
       else{
           count++;
       }
     
      
   }
       
   }
   for(i=0;i<n;i++){
       cout<<a[i]<<" ";
   }

}

