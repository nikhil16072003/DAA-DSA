#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int freq[n];
    for(int i=0;i<n;i++)
    {
        freq[i]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                freq[i]++;
                a[j]=0;
            }
        }
        if(a[i]==0){
            freq[i]=0;
        }
    }
    for(int i=0;i<n;i++){
        cout<<freq[i]<<" ";
    }
    return 0;
}
