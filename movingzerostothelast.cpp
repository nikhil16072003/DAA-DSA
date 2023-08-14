//moving zeros to the last
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int i,j;
    int temp;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]==0){
            for(j=i+1;j<n;j++){
                if(a[j]!=0){
                   temp=a[j];
                   a[j]=a[i];
                   a[i]=temp;
                   break;
                }
            }
        }
    }
    
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
