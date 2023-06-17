#include<iostream>
using namespace std;
int binarysearch(int a[],int i, int j,int n){
    int mid=(i+j)/2;
    if(mid==n){
        return mid;
    }
    else if(mid>n){
       return binarysearch( a, i,mid,n);
    }
    else{
         return binarysearch(a, mid,j,n);
    }
}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   cout<< binarysearch(a,1,n,m);
    return 0;
}
