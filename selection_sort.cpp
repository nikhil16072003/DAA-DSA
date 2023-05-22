#include <iostream>
using namespace std;
int main(){
    int n,i,j,t;
  cin>>n;
    int a[n];
    for(i=0;i<n;i++){
       cin>>a[i];
    }

    for(i=0;i<n;i++){
       int min=i;
       for(j=i+1;j<n;j++){
           if(a[j]<a[min]){
               min=j;
           }
       }
           if(min !=i){
               t=a[i];
               a[i]=a[min];
               a[min]=t;
            }
           
       
   
    }

   for(i=0;i<n;i++){

      cout<<a[i]<<" ";

   }

}
