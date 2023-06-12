
#include <iostream>
#include <climits>
using namespace std;
int rodcut(int price[],int n){
    int i;
    if(n==0){
        return 0;
    }
    int max_value=INT_MIN;
    for(i=1;i<=n;i++){
        int cost=price[i-1]+rodcut(price,n-i);
        if(cost>max_value){
            max_value=cost;
        }
    }
    return max_value;
}
int main() {
   int n,i;
   cin>>n;
  
   int price[n];
  
    for(i=0;i<n;i++){
       cin>>price[i];
   }
   cout<<rodcut(price,n);
    return 0;
}
