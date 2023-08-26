
#include <iostream>
using namespace std;
bool isprime(int n){
    int i;
    if(n<=1){
        return false;
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main() {
   int n;
   cin>>n;
   int i,j;
   int count=0;
   for(i=0;i<n;i++){
       if(isprime(i)){
           count++;
       }
   }
   cout<<count;
    return 0;
}
