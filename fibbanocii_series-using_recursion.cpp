#include <iostream>
using namespace std;
int fib(int n){
    int sum;
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(n>=2){
        sum=fib(n-1)+fib(n-2);
     
    }
    return sum;
}

int main() {
  int n;
  cin>>n;
 int i;
 for(i=1;i<=n;i++){
     cout<<fib(i)<<" ";
 }

    return 0;
}
/////////////////////////////////////////////////////////////////
/*
#include<iostream>
using namespace std;
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    int sum=fib(n-1)+fib(n-2);
    return sum;
}
int main(){
    int n,i;
    cin>>n;
   for(i=1;i<=n;i++){
       cout<<fib(i)<<" ";
   }
}
*/
